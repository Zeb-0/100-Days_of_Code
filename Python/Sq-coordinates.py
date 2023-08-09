#!/usr/bin/python

class Square:

    def __init__(self, size=0, position=(0, 0)):

        self.__size = size
        self.__position = position

    @property
    def size(self):
        return (self.__size)

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("must be integer")
        elif value < 0:
            raise ValueError("value must be >=0")
        self.__size = value

    @propert
    def positio(self):
        return (self.__position)

    @position.setter
    def position(self, value):
        if not isinstance(value, tuple) or len(value) != 2:
            raise  TypeError("Value must be tuple")
        elif not all(isinstance(num, int) for num in value):
            raise TypeError("must be integer")
        elif (
                for num in value
                if num < 0):
            raise ValueError("must be >=0")
        self.__position = value

        def area(self):
            return (self.__size ** 2)

        def my_print(self):
            if self.__size == 0:
                print("")
                return

            # print top padding
            for i in range(self.__positio[1]):
                print("")

            # print square rows
            for i in range(self.__size):
                # horizontal padding
                for n in range(self.__position[0]):
                    print("", end="")

                #print Square content
                for j in range(self.__size):
                    print("#", end="")

                print()
