#!/usr/bin/python

# figuring out About classes

class Square:
    ''' Class Square '''

    def __init__(self, size = 0):
        ''' initialize class instance with 
        private attr `size`

        Args:
            size(int) - size of square
        '''
        self.__size = size

    @property
    def size(self):
        '''
        get property size
        '''
        return (self.__size)

    @size.setter
    def size(self, value):
        ''' set the size '''
        if not isinstance(value, int):
            raise TypeError("must be integer")
        elif value < 0:
            raise ValueError("value must be >=0")
        self.__size = value
 

    def area(self):
        return self.__size ** 2

    def my_print(self):
        # prints to stdout square with char `#`

        for i in range(self.__size):
            for j in range(self.__size):
                print("#", end="")
            print()
        if self.__size == 0:
            print("")
