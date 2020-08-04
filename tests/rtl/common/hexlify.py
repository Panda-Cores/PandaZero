#!/usr/bin/env python3

hexdmp = open("main.hex.dmp", 'r')
nicehex = open("main.hex", 'w')

newline=''
for line in hexdmp:
    line = line[:-1].split(' ')
    if(len(line) > 2):
        for i in range(1, len(line), 2):
            newline = line[i+1] + line[i]
            if(len(newline) == 8):
                nicehex.write(newline + '\n')
                # print(newline + '  ' + bin(int(newline,16)))

hexdmp.close()
nicehex.close()

        