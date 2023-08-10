#!/usr/bin/python

''' test file for module `funcs` '''
import unittest
from models.funcs import Funcs


class test_funcs(unittest.TestCase):

    def test_add(self):
        result = Funcs().add(2, 3)
        self.assertEqual(result, 5)



if __name__ == "__main__":
    unittest.main()
