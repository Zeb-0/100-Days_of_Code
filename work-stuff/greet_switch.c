#include <stdio.h>

// trying tk implement a switch case

int main(){
	int choice = 4;
	char Name[100];
	char Pname[][1000] = {"Morning", "Noontime", "Evening"};
	int Pnumber;

	switch(choice) {
		case 1: // check if choice is morning
			if (choice == 1){
				printf("Good morning %s ? How are you doing today?\n", Name);
				scanf("%99s", response);
				printf("\nThat's great to hear.\nHave a wonderful day.\n");
			}
			break;
		default:
			printf("Please enter a valid choice\n");
			break;
	}
}
