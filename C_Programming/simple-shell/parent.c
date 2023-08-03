#include <stdio.h>
#include <unistd.h>

// ppid refers to the ID of the parent process

int main() {
    pid_t pid, ppid;

    pid = getpid();
    printf("%d : The son,\n", (int)pid);

    ppid = getppid();
    printf("%d : The Father.\n", (int)ppid);

    return 0;
}
