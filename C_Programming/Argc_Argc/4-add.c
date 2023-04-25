#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two positive numbers
 * Return: 0
 */

int main(int argc, char *argv[]){
	int i, j, sum = 0;

	if (argc <= 1){
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++){
		for (j = 0; argv[i][j] != '\0'; j++){
			if (!isdigit(argv[i][j])){
				printf("Error\n");
				return (0);
			}
			
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

