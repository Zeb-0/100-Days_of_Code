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
	char *buffer;	// pointer to store our input
	size_t len;	// size of input line
	
	while(True) {
		printf("$ ");
		getline(&buffer, &len, stdin);
		pr8ntf("%s\n", buffer);

		return (0);
	}
}