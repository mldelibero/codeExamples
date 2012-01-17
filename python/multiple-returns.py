#!/usr/bin/env python2.6

#Code came from http://www.penzilla.net/tutorials/python/functions/
a,b,c = 0,0,0

def getabc():
    a = "Hello"
    b = "World"
    c = "!"
    return a,b,c #defines a tuple on teh fly

def gettuple():
    a,b,c = 1,2,3
    return (a,b,c)

def getlist():
    a,b,c = (3,4),(4,5),(5,6)
    return [a,b,c]

a,b,c = getabc()
d,e,f = gettuple()
g,h,i = getlist()

print a
print b
print c
print d
print e
print f
print g
print h
print i
