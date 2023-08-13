#!/usr/bin/python

magic_string = __import__('magic_string').magic_string

for i in range(10):
    print(magic_string())
