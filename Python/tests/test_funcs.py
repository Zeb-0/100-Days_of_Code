#!/usr/bin/env python

''' test file for module `funcs` '''

import sys
import unittest

sys.path.append('../models')
from funcs import Funcs


class testFuncs(unittest.TestCase):

    def test_add(self):
        result = Funcs().add(2,3)
        self.assertEqual(result, 5)



if __name__ == "__main__":
    unittest.main()
