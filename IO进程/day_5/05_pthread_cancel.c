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
            pthread_exit("tiis is thread1");
        }
        num++;
    }
}

void *pthread_fun2(void *arg)
{
    static int num = 200;
    
        printf("子线程2%#lx正在运行...\n", pthread_self());
    pthread_exit(&num);
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

    void *ret1, *ret2;
    pthread_join(thread1, &ret1);
    pthread_join(thread2, &ret2);

    printf("ret1 = %s, ret2 = %d\n", (char *)ret1, *(int *)ret2);
    
    return 0;
}
