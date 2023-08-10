#!/usr/bin/python

''' test file for module `funcs` '''
import unittest
from funcs import Funcs


class test_funcs:

    def test_add(self):
        add = add(2, 3)
        self.assertEqual(add, 5)



if __name__ == "__main__":
    unittest.main()
