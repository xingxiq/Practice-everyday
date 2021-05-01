#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>



int main(int argc, char const *argv[])
{
    pid_t pid;
    if((pid = fork()) == -1)
    {
        perror("fork error");
        exit(1);
    }
    else if(pid > 0)
    {
        while(1)
        {
            printf("父进程正在运行...\n");
            sleep(1);
        }
    }
    else
    {
        printf("子进程正在运行...\n");
        sleep(1);
        while(1)
        {
            printf("子进程正在运行...\n");
            sleep(1);
        }
    }
    

    return 0;
}
