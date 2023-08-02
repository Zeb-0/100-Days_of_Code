#include <stdio.h>
#include <unistd.h>

// ppid refers to id of parent process

int main() {
	pid_t parent;

	parent = getpid();
	printf("%d : The son,\n", parent);

	parent = getppid();
	printf("%d : The Father.\n", parent);

	return (0);
}
