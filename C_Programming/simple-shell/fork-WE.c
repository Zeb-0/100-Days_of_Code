#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

// the correct version for fork + wait + execve

int main() {
	int i = 0;
	int status;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};
	pid_t my_pid;
	pid_t child_pid = 1;

	my_pid = getpid();
	while (i <= 4 && child_pid != 0) {
		child_pid = fork(); // create new child process
		if (child_pid == -1) {
			perror("Error:");
			return (0);
		}
		if (execve(argv[0], argv, NULL) == -1)
			perror("Error");
		wait(&status);
		i++;
	}
	if (child_pid == 0) {
		printf("Child id : %u\n\nParent Id : %u\n\n", getpid(), getppid());
	}
	else
		printf("%u Your Parent is : %u\n\n", child_pid, my_pid);
	return (0);
}
