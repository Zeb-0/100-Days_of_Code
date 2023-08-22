data = [(9, 3), (4, 3), (6, 1), (5, 8)]

# sort based on second element
data_sorted = sorted(data, key=lambda x: x[1])
print(data_sorted)