#include <stdio.h>
#include <unistd.h>

// we use system call `getpid` to retrieve a process's id.
// this id belongs to a process(an instance of an executing program)

/**
 * main - PID
 *
 * Return: 0
 */
int main() {
	pid_t my_pid;

	my_pid = getpid();
	printf("%d\n", my_pid);

	return (0);
}
