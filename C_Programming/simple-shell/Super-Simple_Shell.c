#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

// Creating a simple shell
// will include:
/**
 * execve - for executing a program
 * getline - for reading a line from the stdin
 * fork - creating new processes
 * wait - controlling execution of processes
 */

int main() {
	int i, status;
	pid_t my_pid;
	char *argv[] = {"bin/ls", "-la", "/Zeberio/Desktop/Coding/", NULL};
	char *buffer = malloc(1024);
	size_t line = 1024;

	// create new process
	my_pid = fork();
	if (my_pid == -1) {
		perror("Error");
		return (1);
	}

	// read line
	while(1) {
		printf("& ");
		getline(&buffer, &line, stdin);
	}

	return (0);
}
