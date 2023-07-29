#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// some practice on strimgs
int main(){
	char Name[100];
	int Pnumber;
	char Pname[][100] = {"Morning", "Noontime", "Evening"};
	int i;

	do {
		printf("Hello. Welcome to our greetings session.\nWhat is your name?\n");
		scanf("%99s", Name);
		if (strlen(Name) < 3){
			printf("Name is too short.\n");
			continue;
		}
		else {
			printf("Hi %s. I am your assistant\n", Name);
			break;
		}
	}while (1);
	printf("\nHere are the greetings packages that we offer.\nSelect one.\n");

//	Package = 3;
//	for (Package = 0; Package <= 3; Package++) {
//		printf("%d\n", Package);
//		Pname[100] = ["Morning", "Noontime", "Evening"];
//		for (i = 0; Pname[i] < 

	Pnumber = sizeof(Pname) / sizeof(Pname[0]);
	for (i = 0; i < Pnumber; i++){
		printf("%d : %s\n\n", i + 1, Pname[i]);
	}

	int choice;

	do {
		printf("\nEnter choice: \n");

		// check if input is valid integer
		if (scanf("%d", &choice) != 1) {
			while (getchar() != '\n')
				continue;
			printf("Invalid choice. Please enter a Valid choice.\n");
			continue;
		}
		if (choice < 1 || choice > Pnumber){
			printf("Invalid choice. Please enter a Valid choice.\n");
			continue;
		}
		else {
			printf("Good morning %s. How are you doing today?\n", Name);
			char response[100];

			scanf("%99s", response);
			break;
		}
	}
	while (1);
	printf("That's great to hear.\nHave a wonderful day.\n");
	return (0);
}
