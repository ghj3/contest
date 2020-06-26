#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Aug 29 00:23:52 2019

@author: k3sekido
"""

a, b = map(int, input().split())
if (a * b % 2==0):
    print('Even')
else:
    print('Odd')