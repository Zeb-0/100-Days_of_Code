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
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *buffer = malloc(1024);
	size_t line = 1024;

	while (1) {
		// create new process
		child_pid = fork();
		if (child_pid == -1) {
			perror("Error");
			return (1);
		}
		else if (child_pid == 0) {
			printf("$ ");
			getline(&buffer, &line, stdin);
			execve(argv[0], argv, NULL);
			perror("Error");
			exit(1);
		}
		else
			wait(&status);
	}
	free(buffer);
	return (0);
}
