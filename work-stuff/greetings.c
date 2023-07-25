#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// some practice on strimgs
int main(){
	char Name[100];

	printf("Hello. Welcome to our greetings session.\nWhat is your name?\n");
	scanf("%99s", Name);
	if (strlen(Name) < 3){
		printf("Name is too short.\n");
	}
	else
		printf("Hi %s. I am your assistant\n", Name);
	return (0);
}
