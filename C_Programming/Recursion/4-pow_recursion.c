#include <stdio.h>

/**
 * pow_recursion - returns power of x raised to y
 * Returns: -1 if y is < 0
 */

int _pow_recursion(int x, int y);

int _pow_recursion(int x, int y){
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	int pow = x * _pow_recursion(x, y - 1);
	return (pow);
}

int main(){
	int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
