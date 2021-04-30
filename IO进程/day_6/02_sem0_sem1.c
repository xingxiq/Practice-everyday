#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>

sem_t sem0, sem1;

int flag = 0;

void *thread_fun1(void *arg)
{
    while(1)
    {
        sem_wait(&sem1);

        printf("正在做蛋糕...\n");
        sleep(1);
        printf("蛋糕做好了...\n");

        sem_post(&sem0);
    }
}

void *thread_fun2(void *arg)
{
    while(1)
    {
        sem_wait(&sem0);

        printf("正在买蛋糕...\n");
        sleep(1);
        printf("蛋糕买好了...\n");

        sem_post(&sem1);
    }
}

int main(int argc, char const *argv[])
{
    sem_init(&sem0, 0, 0);
    sem_init(&sem1, 0, 1);
    pthread_t pthread1,pthread2;

    if(pthread_create(&pthread1, NULL, thread_fun1, NULL) != 0)
    {
        perror("pthread_create error");
        exit(1);
    }

    if(pthread_create(&pthread2, NULL, thread_fun2, NULL) != 0)
    {
        perror("pthread_create error");
        exit(1);
    }

    pthread_join(pthread1,NULL);
    pthread_join(pthread2,NULL);

    sem_destroy(&sem0);
    sem_destroy(&sem1);
    

    return 0;
}
