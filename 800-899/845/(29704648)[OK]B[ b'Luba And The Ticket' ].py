#!/usr/bin/env python
# -*- coding: utf-8 -*-

a = list(map(int, input()))
b = a[:3]
a = a[3:]
if sum(a) > sum(b):
    a, b = b, a
d = sum(b) - sum(a)
if d == 0:
    print(0)
    exit()
t = list(b)
for i in a:
    t.append(9-i)

for i, j in enumerate(sorted(t, reverse=True)):
    d -= j
    if d <= 0:
        print(i+1)
        break
