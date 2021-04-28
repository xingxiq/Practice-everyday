#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if(pid == -1)
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
        char *buf[3] = {"./01_test.sh",NULL};
        if(execv("./01_test.sh", buf) == -1)
        {
            perror("execl error");
            exit(1);
        }
    }
    


    return 0;
}
