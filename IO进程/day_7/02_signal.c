#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void handler(int sig)
{
    if(sig == SIGINT)
    {
        printf("SIGINT信号产生了，正在执行\n");
    }

    if(sig == SIGQUIT)
    {
        printf("SIGQUIT信号产生了，正在执行\n");
    }

    if(sig == SIGTSTP)
    {
        printf("SIGTSTP信号产生了，正在执行\n");
    }
}

int main(int argc, char const *argv[])
{
    signal(SIGINT, handler);
    signal(SIGQUIT, handler);
    signal(SIGTSTP, handler);

    while(1)
    {
        printf("pid = %d, hello world\n", getpid());

        sleep(1);
    }
    
    return 0;
}
