import unittest
from countingbits import Solution


class Checker(unittest.TestCase):

    def test_1(self):
        self.assertEqual(Solution.countBits(Solution(), 2), [0, 1, 1])

    def test_2(self):
        self.assertEqual(Solution.countBits(Solution(), 5), [0, 1, 1, 2, 1, 2])
