#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork and wait
 *
 * Return: 0
 */
int main() {
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1) {
		perror("Error:");
		return (1);
	}
	if (child_pid == 0) {
		printf("Wait for me\n");
		sleep(4);
	}
	else {
		wait(&status);
		printf("It's all better now\n");
	}
	return (0);
}
