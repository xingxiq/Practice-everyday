#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

    pid_t pid;

void handler(int sig)
{
    kill(pid, SIGKILL);
}

void handler_z(int sig)
{
    wait(NULL);
}

int main(int argc, char const *argv[])
{

    if((pid = fork()) == -1)
    {
        perror("fork error");
        exit(-1);
    }
    else if(pid > 0)
    {
        signal(SIGUSR1, handler);
        signal(SIGCHLD,handler_z);
        while(1)
        {
            printf("父进程正在运行...\n");
            sleep(1);
        }
    }
    else
    {
        printf("子进程正在运行...\n");
        sleep(5);
        printf("子进程正在给父进程发送信号...\n");
        kill(getppid(), SIGUSR1);

        while(1)
        {
            printf("子进程正在运行...\n");
            sleep(1);
        }
    }
    

    
    return 0;
}
