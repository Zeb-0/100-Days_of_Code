#!/usr/bin/python

# retrieve an element at specified index

def element_at(my_list, idx):
#    for idx in range(len(my_list)):
        if idx < 0:
            return None
        elif idx > len(my_list):
            return None
        else:
            return (my_list[idx])
