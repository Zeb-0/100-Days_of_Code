#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// some practice on strimgs
int main(){
	char Name;

	printf("Hello. Welcome to our greetings session.\nWhat is your name?\n");
	scanf("%s", &Name);
	if (Name.length < 8){
		printf("Name is too short.\n");
	}
	else
		printf("Hi %s. I am your assistant\n", Name);
	return (0);
}
