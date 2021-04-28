#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *pthread_fun1(void *arg)
{
    int num = 1;
    while(1)
    {
        printf("子线程1%#lx正在运行...\n",pthread_self());
        sleep(1);
        if(num == 5)
        {
            pthread_exit(NULL);
        }
        num++;
    }
}

void *pthread_fun2(void *arg)
{
    while(1)
    {
        printf("子线程2%#lx正在运行...\n", pthread_self());
    }
}
int main(int argc, char const *argv[])
{
    printf("主控线程%#lx正在运行...\n", pthread_self());
    pthread_t thread1;
    if((pthread_create(&thread1, NULL, pthread_fun1, NULL)) != 0)
    {
        perror("pthread error");
        exit(1);
    }

    pthread_t thread2;
    if((pthread_create(&thread2, NULL, pthread_fun2, NULL)) != 0)
    {
        perror("pthread error");
        exit(1);
    }

    sleep(1);
    printf("hello world\n");
    pthread_exit(NULL);
    while(1)
    {
        ;
    }
    
    return 0;
}
