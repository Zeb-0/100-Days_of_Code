#!/usr/in/python

Square = __import__('Square').Square

my_square = Square(3)
my_square.my_print()

print("---")

my_square.size = 10
my_square.my_print()

print("---")

my_square.size = 0
my_square.my_print()

print("---")
