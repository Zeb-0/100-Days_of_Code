#!/usr/bin/python

Square = __import__("Square").Square

my_square = Square(89)
print("Area = {} for size {}".format(my_square.area(), my_square.size))

my_square.size = 4
print("Area = {} for size {}".format(my_square.area(), my_square.size))

try:
    my_square.size = "5 feet"
    print("Area = {} for size {}".format(my_square.area(), my_square.size))
except Exception as e:
    print(e)