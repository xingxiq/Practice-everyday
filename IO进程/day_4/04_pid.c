#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int a = 100;

int main(int argc, char const *argv[])
{
    int b = 200;
    static int c = 300;

    pid_t pid = fork();
    if(pid == -1)
    {
        perror("fork error");
        return -1;
    }
    else if(pid > 0)
    {
        a = 666;
        b = 777;
        c = 888;
        printf("父进程: a = %d, b = %d, c = %d\n", a, b, c);
        printf("父进程: &a = %p, &b = %p, &c = %p\n", &a, &b, &c);
    }
    else
    {
        sleep(1);
        printf("子进程: a = %d, b = %d, c = %d\n", a, b, c);
        printf("子进程: &a = %p, &b = %p, &c = %p\n", &a, &b, &c);
    }
    while(1)
    ;
    
    
    return 0;
}
