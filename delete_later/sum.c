#include <stdio.h>

/* calculate sum of numbers fron user input */
int main() {
	int n, i, sum, nums;

	sum = 0;
	// ask user to enter number
	printf("Please enter number to add\n");
	scanf("%d", &n);

	printf("\nEnter the rest of the numbers one by one\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &nums);
		sum = sum + nums;
	}
	printf("\n Sum of given numbers is: %d", sum);
	
	return (0);
}
