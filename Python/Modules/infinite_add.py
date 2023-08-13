#!/usr/bin/python

import sys

if __name__ == '__main__':
    count = len(sys.argv) - 1
    total = 0
    for i in range(count):
        total += int(sys.argv[i + 1])
    print("{}".format(total))
