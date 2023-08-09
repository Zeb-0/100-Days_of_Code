#!/usr/bin/python

import unittest
import math
import sys

sys.path.append('../models')

from Square import Square

class testSquare(unittest.TestCase):

    # test area method
    def test_area(self):
        square = Square(5)
        self.assertEqual(square.area(), 25)

    # return the corect size
    def test_size_property(self):
        square = Square(4)
        self.assertEqual(square.size, 4)

    # invalid type for square size
    def test_size_setter(self):
        square = Square()
        with self.assertRaises(ValueError):
            square.size = -3

if __name__ == '__main__':
    unittest.main()
