names = ['alice', 'bob', 'charles']

def capitalize(name):
    return name.upper()

capitalized_names = list(map(capitalize, names))
print(capitalized_names)