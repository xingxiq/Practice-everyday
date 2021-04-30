#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0);

sem_t sem_1,sem_2,sem_3;

void *fun_1(void *arg)
{   
    int num = 1;
    while(num <= 10)
    {
        sem_wait(&sem_3);

        printf("A");
        num++;

        sem_post(&sem_1);
    }
}
void *fun_2(void *arg)
{
    int num = 1;
    while(num <= 10)
    {
        sem_wait(&sem_1);

        printf("B");
        num++;

        sem_post(&sem_2);
    }
}
void *fun_3(void *arg)
{  
    int num = 1;
    while(num <= 10)
    {
        sem_wait(&sem_2);

        printf("C");
        num++;

        sem_post(&sem_3);
    }
}


int main(int argc, char const *argv[])
{
    sem_init(&sem_1, 0, 0);
    sem_init(&sem_2, 0, 0);
    sem_init(&sem_3, 0, 1);

    pthread_t pthread_1,pthread_2,pthread_3;
    
    if((pthread_create(&pthread_1, NULL, fun_1, NULL)) != 0)
    {
        ERRLOG("pthread_1 create error");
    }
    if((pthread_create(&pthread_2, NULL, fun_2, NULL)) != 0)
    {
        ERRLOG("pthread_2 create error");
    }
    if((pthread_create(&pthread_3, NULL, fun_3, NULL)) != 0)
    {
        ERRLOG("pthread_3 create error");
    }

    pthread_join(pthread_1, NULL);
    pthread_join(pthread_2, NULL);
    pthread_join(pthread_3, NULL);

    putchar(10);

    sem_destroy(&sem_1);
    sem_destroy(&sem_2);
    sem_destroy(&sem_3);

    return 0;
}
