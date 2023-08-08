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
        
        if type(size) not int:
            raise TypeError("size must be integer")
        elif size < 0:
            raise ValueError("size must be >=0")
        self.__size = size
