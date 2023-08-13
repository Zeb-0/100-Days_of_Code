#!/usr/bin/python

if __name__ == '__main__':
    argv = []
    if len(argv) == 0:
        print(".")
    else:
        for i in range(len(argv)):
            print("{} : {}".format(i, argv[i]))
