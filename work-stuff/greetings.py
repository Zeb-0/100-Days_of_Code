print('Hi, welcome to this session.\nWhat is your name?')
print()

Name = input('Enter name: ')
if Name.length > 8:
    print('Name must be more than 10 chars long')
else:
    print('Hello ' + Name, '.')
