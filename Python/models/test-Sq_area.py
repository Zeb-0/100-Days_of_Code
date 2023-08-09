#!/usr/bin/python

Square = __import__('Square').Square

my_square = Square(4)
print("Area = {}".format(my_square.area()))

try:
    print(my_square.area.size)
except Exception as e:
    print(e)

try:
    print(my_square.area.__size)
except Exception as e:
    print(e)

my_square_1 = Square(5)
print("Area = {}".format(my_square_1.area()))
