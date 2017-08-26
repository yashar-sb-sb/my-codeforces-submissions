#!/usr/bin/env python
# -*- coding: utf-8 -*-
s = input()

ans = s.count('VK')
f = s[-2:] == 'VV' or s[:2] == 'KK' or s.find('VVV') != -1 or s.find('KKK') != -1

if f:
    ans += 1
print(ans)
