#include <stdio.h>

int is_prime_number(int n);
int prime_number(int n, int i);

/**
 * prime_number - checks for prime number
 * @n: input number
 * @i: iterator
 * Return: 1 if prime, else 0
 */

int prime_number(int n, int i){
	if (n < 2) /* base case */
		return (0);

	else if (n % i == 0 && i != n)
		return (0);
	else if (i == n)
		return (1);
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - return prime number
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n){
	return (prime_number(n, 2));
}


int main(){
	int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
