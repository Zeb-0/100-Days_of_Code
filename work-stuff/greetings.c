#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// some practice on strimgs
int main(){
	char Name[100];
	int Pno;
	char Pname[][100] = {"Morning", "Noontime", "Evening"};
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
//	for (Package = 0; Package <= 3; Package++) {
//		printf("%d\n", Package);
//		Pname[100] = ["Morning", "Noontime", "Evening"];
//		for (i = 0; Pname[i] < 

	Pno = sizeof(Pname) / sizeof(Pname[0]);
	for (i = 0; i < Pno; i++){
		printf("%d : %s\n\n", i + 1, Pname[i]);
	}
	int choice;

	do {
		printf("\nEnter choice: ");
		scanf("%d)\n", &choice);

		if (choice > 3){
			printf("Invalid choice. Please enter a Valid choice.\n");
			continue;
		}
		else {
			printf("Good morning %s. How are you doing today?\n", Name);
			char response[100];

			scanf("%s\n", response);
		}
		break;
	}
	while (1);
	return (0);
}
