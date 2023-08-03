#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - get input from user
 * tokenize the input(string) using delimiters
 * print tokenized string
 *
 * Return: 0
 */

int main() {
	char *buffer = malloc(1024);
	char delims[] = " ";
	size_t len = 1024;
	char *token;

	while (1) {
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s\n", buffer);
	}
	token = strtok(buffer, delims);
	while(token) {
		printf("Token : %s\n", token);
		token = (NULL, delims);
	}
	return (0);
}
