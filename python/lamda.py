#!/usr/bin/env python2.6

# This example shows how to use lamba functions

def map(fun,list):
    nlist = []
    for item in list:
        nlist.append(fun(item))
        return nlist

list = xrange(0,2,100)

increment = lambda x: x+1
map.map(increment,list)

