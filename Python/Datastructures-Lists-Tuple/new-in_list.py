#!/usr/bin/python

# replace an element in a list at specified position
# do not modify the original

def new_in_list(my_list, idx, element):
    if idx < 0 or idx > (len(my_list) -1):
        return my_list
    
    else:
        new_list = list(my_list)
        new_list[idx] = element
    return (new_list)