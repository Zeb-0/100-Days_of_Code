#!usr/bin/python

Square = __import__("Square").Square

my_square = Square(4)
my_square.my_print()

print('---')

my_square_1 = Square(3, (1, 1))
my_square_1.my_print()

print('---')

my_square_2 = Square(6, (0, 3))
my_square_2.my_print()

print('---')