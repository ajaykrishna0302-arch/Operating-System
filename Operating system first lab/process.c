#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        printf("Process creation failed\n");
    }
    else if (pid == 0)
    {
        printf("\nChild Process\n");
        printf("Process ID: %d\n", (int)getpid());
        printf("Parent Process ID: %d\n", (int)getppid());
    }
    else
    {
        printf("\nParent Process\n");
        printf("Process ID: %d\n", (int)getpid());
        printf("Parent Process ID: %d\n", (int)getppid());
        printf("Child Process ID: %d\n", (int)pid);
    }

    return 0;
}