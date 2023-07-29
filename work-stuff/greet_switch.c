#include <stdio.h>

// trying tk implement a switch case

int main(){
	int choice = 3;
	char Name[100];
	char Pname[][1000] = {"Morning", "Noon time", "Evening"};
	int Pnumber;

	switch(choice) {
		case 1: // check if choice is morning
			if (choice == 1){
				printf("Good morning %s ?\n", Name);
				break;
			}
	}
}
