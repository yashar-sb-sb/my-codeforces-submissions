#!/usr/bin/env python
# -*- coding: utf-8 -*-
n = int(input())
s = input()

for i in range(n):
    for j in range(1, n):
        t = s[i::j]
        if t.find('*'*5) != -1:
            print('yes')
            exit()

print('no')
