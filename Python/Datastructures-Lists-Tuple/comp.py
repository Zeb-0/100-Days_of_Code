#!/usr/bin/python

# list comprehension

comp = []
for x in [1, 3, 5, 6, 4]:
    for y in [3, 7, 2, 4, 1]:
        if x != y:
            comp.append((x, y))
print(comp)
