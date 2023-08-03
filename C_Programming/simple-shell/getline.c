#include <stdio.h>
#include <stdlib.h>

// trying out the getline function
/**
 * getline - continuously prompts user for input
 * by printing `$ ` first
 * stores the input in a buffer
 * then prints to stdout
 */
int main(){
	char *buffer = malloc(1024);	// pointer to store our input
	size_t len = 1024;	// size of input line
	
	while(1) {
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s\n", buffer);
	}
	return (0);
}
