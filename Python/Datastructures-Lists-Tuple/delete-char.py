# delete all occurrences of 'c' or 'C'
#remember string are immutable in Python!

def no_c(my_string):
    new_string = ''
    for i in range(len(my_string)):
        if my_string[i] != 'c' and my_string[i] != 'C':
            new_string += my_string[i]
    return new_string