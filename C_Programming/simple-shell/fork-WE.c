#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

// the correct version for fork + wait + execve

int main() {
	int i = 0;
	int status;
	char *argv[] = {"ls", "-l", ".", NULL};
	pid_t child_pid;

	while (i < 5) {
		child_pid = fork(); // create child process
		// on failure to create child process
		if (child_pid == -1) {
			perror("Error:");
			return (1);
		}
		// on successfully creating child process
		else if (child_pid == 0) {
			// execute execve
			execve(argv[0], argv, NULL);
			perror("Error:"); //execve only returns on error
			return (1);
		}
		else {
			// Parent process
			wait(&status);  //waits for child process to terminate
			i++;
		}
	}

	return (0);
}
