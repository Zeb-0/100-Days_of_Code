#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// some practice on strimgs
int main(){
	char Name[100];
	int Package;
	char Pname;
	int i;

	printf("Hello. Welcome to our greetings session.\nWhat is your name?\n");
	scanf("%99s", Name);
	if (strlen(Name) < 3){
		printf("Name is too short.\n");
	}
	else
		printf("Hi %s. I am your assistant\n\n", Name);
	printf("Here are the greetings packages that we offer.\nSelect one.\n");

//	Package = 3;
	for (Package = 0; Package <= 3; Package++)
		printf("%d\n", Package);
	return (0);
}
