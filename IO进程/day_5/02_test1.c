#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, const char *argv[])
{
    pid_t pid;
    if((pid = fork()) == -1)
    {
        perror("fork error");
        exit(1);
    }
    else if(pid > 0)
    {
        printf("父进程正在运行...\n");
        wait(NULL);
    }
    else
    {
        printf("子进程正在运行...\n");
    if(execl("/bin/ls","ls","-al",NULL) == -1)
    {
        perror("excel error");
        exit(1);
    }

    printf("子进程执行完毕\n");
    exit(0);
    }
    return 0;
}

