#!/usr/bin/python

LockedClass = __import__('locked_class').LockedClass

lc = LockedClass()
lc.first_name = "Zeberio"

try:
    lc.last_name = "Morande"
except Exception as e:
    print("[{} {}".format(e.__class__.__name__, e))
