#include <stdio.h>

// swap values

int main () {
	int a, b, temp;

	a = 2;
	b = 5;
	temp = a;
	a = b;
	b = temp;

	printf("The swapped values are: %d and %d\n", a, b);

	return (0);
}
