#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork error");
        return 0;
    }
    else if(pid > 0)
    {
        printf("父进程正在运行\n");
        sleep(1);
        printf("ahahahhahahaha\n");
    }
    else
    {
        printf("子进程正在运行\n");
        sleep(1);
        printf("hehehheheheheh\n");
    }

    printf("hello world\n");
    
    return 0;
}
