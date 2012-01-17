#! /usr/bin/env python2.6
'''
This file contains an example of using functions in python.
It was taken from http://www.penzilla.net/tutorials/python/functions/
'''
#Takes a function
def map(fun,list):
    nlist = []
    for item in list:
        nlist.append(fun(item))
    return nlist

def rmap(fun,list):
    if list == []:
        return []
    else:
        return [fun(list[0])] + rmap(fun,list[1:])

def increment(x):
    return x+1
a = [1,2,3,4,5]
print map(increment,a)
print map(increment,a) == rmap(increment,a)

