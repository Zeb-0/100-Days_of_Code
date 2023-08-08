#!/usr/bin/python

Square = __import__('Square').Square

my_square = Square(4)
print(type(my_square))
print(my_square.__dict__)

try:
    print(my_square.size)
except Exception as e:
    print(e)
