#!/usr/bin/python
import os
def decorate_f(func):
    def inner():
        print("before f() is called")        
        func() 
        print("after f() is called")        
    return inner
@decorate_f
def f():
    print("f() is called")
if __name__=="__main__":
    f() 
