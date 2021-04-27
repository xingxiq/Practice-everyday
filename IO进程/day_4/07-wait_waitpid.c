#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

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
        printf("********父进程正在执行************\n");
        waitpid(-1, NULL, 0);
        printf("子进程退出了...\n");
    }
    else
    {
        int num = 1;
        while(1)
        {
            printf("*******子进程正在执行********\n");
            sleep(1);
            if(num == 5)
            {
                exit(0);
            }
            num++;
        }
    }

    return 0;
}

