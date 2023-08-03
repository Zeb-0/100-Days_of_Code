#include <stdio.h>
#include <string.h>

// string tokenization

int main() {
	char str[] = "hello. We are testing string token.";
	char delims[] = ",."; // for splitting the string
	
	char *token = strtok(str, delims);
	while (token != NULL) {
		printf("Token : %s\n", token);
		token = strtok(NULL, delims);
	}
	return  (0);
}
