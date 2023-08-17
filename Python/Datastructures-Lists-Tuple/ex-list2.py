#!/usr/bin/python
# squares using loop

squares = []
for x in range(12):
    squares.append(x ** 2)
squares.append(144)
squares[0] = 169
print(squares)
