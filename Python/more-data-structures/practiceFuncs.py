# create a function that receives a list and a function
# passed function will return true or false if list value is odd
#nsurrounding function will return a list of odd numbers


# check if number passed is odd
def is_odd(num):
    if num % 2 == 0:
        return False
    else:
        return True

# return list of odd numbers   
def odd_list(list, func):
    oddList = []
    for i in list:
        if func(i):
            oddList.append(i)
    
    return oddList

# create a list
alist = range(1, 20)
print(odd_list(alist, is_odd))