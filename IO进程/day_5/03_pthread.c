#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *pthread_fun1(void *arg)
{
    printf("子线程1正在运行...\n");
    sleep(1);
    printf("**************\n");
}

void *pthread_fun2(void *arg)
{
    printf("子线程2正在运行...\n");
    sleep(1);
    printf("---------------\n");
}


int main(int argc, const char *argv[])
{
    printf("主控线程正在运行...\n");

    pthread_t thread1;
    if((pthread_create(&thread1, NULL, pthread_fun1, NULL)) != 0)
    {
        perror("pthread_create error");
        exit(1);
    }
    pthread_t thread2;
    if((pthread_create(&thread2, NULL, pthread_fun2, NULL)) != 0)
    {
        perror("pthread_create error");
        exit(1);
    }
    printf("hello world\n");

    while(1)
    {
        ;
    }


    return 0;
}

