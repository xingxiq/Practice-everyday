#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_mutex_t mutex;
int money = 10000;

/*
void *zhangsan_fun(void *arg)
{
    int yu, qu = 10000;
    int shiji;

    pthread_mutex_lock(&mutex);
    printf("正在查询余额...\n");
    sleep(1);
    yu = money;

    printf("正在取钱...\n");
    sleep(1);
    if(yu < qu)
    {
        shiji = 0;
    }
    else
    {
        yu = yu - qu;
        money = yu;
        shiji = qu;
    }

    printf("张三想取%d，实际取了%d，余额为%d\n",qu, shiji, yu);
    pthread_mutex_unlock(&mutex);

}

void *lisi_fun(void *arg)
{
    int yu, qu = 10000;
    int shiji;

    pthread_mutex_lock(&mutex);
    printf("正在查询余额...\n");
    sleep(1);
    yu = money;

    printf("正在取钱...\n");
    sleep(1);
    if(yu < qu)
    {
        shiji = 0;
    }
    else
    {
        yu = yu - qu;
        money = yu;
        shiji = qu;
    }

    printf("李四想取%d，实际取了%d，余额为%d\n",qu, shiji, yu);
    pthread_mutex_unlock(&mutex);
    
}
*/
void *zhangli_fun(void *arg)
{
    int yu, qu = 10000;
    int shiji;

    //char buf[32] = {0};
    //strcpy(buf,(char *)arg);

    pthread_mutex_lock(&mutex);
    printf("正在查询余额...\n");
    sleep(1);
    yu = money;

    printf("正在取钱...\n");
    sleep(1);
    if(yu < qu)
    {
        shiji = 0;
    }
    else
    {
        yu = yu - qu;
        money = yu;
        shiji = qu;
    }

    printf("%s想取%d，实际取了%d，余额为%d\n",(char *)arg,qu, shiji, yu);
    pthread_mutex_unlock(&mutex);
    
}





int main(int argc, char const *argv[])
{
    pthread_mutex_init(&mutex,NULL);
    pthread_t zhangsan, lisi;
    /*

    if(pthread_create(&zhangsan,NULL, zhangsan_fun,NULL) != 0)
    {
        perror("pthread_create error");
        exit(1);
    }
    if(pthread_create(&lisi,NULL, lisi_fun,NULL) != 0)
    {
        perror("pthread_create error");
        exit(1);
    }
    */
   //char buf_zhang[32] = "张三";
   //char buf_lisi[32] = "李四";
   if(pthread_create(&zhangsan,NULL, zhangli_fun,"张三") != 0)
    {
        perror("pthread_create error");
        exit(1);
    }
    if(pthread_create(&lisi,NULL, zhangli_fun,"李四") != 0)
    {
        perror("pthread_create error");
        exit(1);
    }



    pthread_join(zhangsan, NULL);
    pthread_join(lisi, NULL);

    pthread_mutex_destroy(&mutex);

    while(1)
    {
        ;
    }

    
    return 0;
}
