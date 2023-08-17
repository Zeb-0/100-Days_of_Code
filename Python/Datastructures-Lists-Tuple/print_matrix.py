# print the contents o a matrix

def print_matrix_integer(matrix=[[]]):
    for row in matrix:
        for col in row:
            if col != row:
                print("{:d}".fomat(col))