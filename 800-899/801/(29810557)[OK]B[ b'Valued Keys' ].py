#!/usr/bin/env python
# -*- coding: utf-8 -*-
x = input()
y = input()

Y = ''.join(map(min, zip(x, y)))

if Y != y:
    Y = -1
print(Y)
