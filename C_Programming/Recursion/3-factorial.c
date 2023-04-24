#include <stdio.h>

/**
 * factorial - retuns factorial of a given number
 * @n: the input number
 * Returns: -1 if n is lower than 0
 */

int factorial(int n);

int factorial(int n){
	int fact;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	fact = n * factorial(n - 1);
	return (fact);
}

int main(){
	int r;

        r = factorial(1);
        printf("%d\n", r);
        r = factorial(5);
        printf("%d\n", r);
        r = factorial(10);
        printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
