#include <stdio.h>
#include <stdli.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

// combining fork, wait and execve
int main() {
	int i, status;
	char *argv[] = {"bin/ls", "ls", "tmp/", NULL};
	pid_t pid;
	pid_t child_pid = 1;

	pid = getpid();
	while(i <= 4 && child_pid != 0) {
		// create child using fork
		child_pid = fork();
		// catch an error if found
		if (child_pid == -1) {
			perror("Error:");
			return (1);
		}
		wait(&staus);
	}
	if (child_pid == 0) {
		printf("Son Id : %u\n\nPops Id : %u\n", getpid(), getppid());
	}
	else {
		printf("%u I am the parent and my Id is : %u\n", pid, child_pid);
	}
	if (execve(argv[0], argv, NULL) == -1)
		/*perror("Error:");*/
	return (0);
}
