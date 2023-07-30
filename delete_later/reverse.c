#include <stdio.h>

// print in reverse
int main() {

	char letters[3];
	int i;

	printf("Enter three letters: ");
	for (i = 0; i < 3; i++)
		scanf("%c", letters[i]);


//	int tl = sizeof(letters) / sizeof(letters[0]);

	for (i = 2; i >= 0; i--) {
		printf("%c ", letters[i]);
	}
	printf("\n");

	return (0);
}
