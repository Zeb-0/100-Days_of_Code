#include <stdio.h>

// find largest number

int main() {
	int n1, n2, n3, largest;

	printf("Enter three numbers\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 < n2) {
		if (n1 > n3)
			largest = n1;
		else
			largest = n3;
	}
	else {
		if (n2 > n3)
			largest = n2;
		else
			largest = n3;
	}

	printf("The Largest of them numbers is: %d\n", largest);

	return (0);
}
