#include <stdio.h>

// prints all arguments passed to the prompt

int main(int argc, char *argv[]) {
	int i;

	for (i = 0; i < argc; i++) {
//		argv = argv[i];
		printf("%s\n", argv[i]);
	}

	return (0);
}
