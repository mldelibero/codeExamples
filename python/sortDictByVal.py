#! /usr/bin/env python2.7
""" Sorts dict by item in list in value of dict."""
mydict2 = {'one':['g',0],
        'two':['f',1],
        'three':['e',2]
}

print sorted(mydict2,key=lambda key1:mydict2[key1][0])
print sorted(mydict2,key=lambda key1:mydict2[key1][1])
