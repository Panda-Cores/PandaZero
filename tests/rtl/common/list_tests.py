#!/usr/bin/env python3

import os

tests = ''
for filename in os.listdir('tests'):
    if 'dontrun' not in filename and 'common' not in filename:
        tests += filename + ' '

print(tests)