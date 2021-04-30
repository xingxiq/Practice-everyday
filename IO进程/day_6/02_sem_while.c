#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>

sem_t sem;

int flag = 0;

void *thread_fun1(void *arg)
{
    printf("正在做蛋糕...\n");
    sleep(1);
    printf("蛋糕做好了...\n");

    sem_post(&sem);
}

void *thread_fun2(void *arg)
{
    sem_wait(&sem);

    printf("正在买蛋糕...\n");
    sleep(1);
    printf("蛋糕买好了...\n");
}

int main(int argc, char const *argv[])
{
    sem_init(&sem, 0, 0);
    pthread_t pthread1,pthread2;

    while(1)
    {

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
        
    }

    sem_destroy(&sem);
    

    return 0;
}
