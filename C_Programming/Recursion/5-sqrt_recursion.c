#include <stdio.h>

/**
 *_is_sqroot - calculates natural square root of a number
 *
 * Returns: -1 if n does not have a natural square root
 */

int _is_Sqroot(int i, int j);
int _sqrt_recursion(int n);

int _is_Sqroot(int i, int j){
	if (i * i == j) // i is natural square root of j
		return (i);
	else if (i * i > j) // i is not Natural sqroot of j
		return (-1);
	return (_is_Sqroot(j, i + 1)); // recursive case
}

/**
 * _sqrt_recursion - gets sqroot of natural number
 * Returns: -1 if no natural root found
 */

int _sqrt_recursion(int n){
	/* base case */
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (_is_Sqroot(n, 1));
}

int main(void){
	int r;

        r = _sqrt_recursion(1);
        printf("%d\n", r);
        r = _sqrt_recursion(1024);
        printf("%d\n", r);
        r = _sqrt_recursion(64);
        printf("%d\n", r);
        r = _sqrt_recursion(17);
        printf("%d\n", r);
        r = _sqrt_recursion(9);
        printf("%d\n", r);
        r = _sqrt_recursion(-1);
        printf("%d\n", r);
        return (0);
}
