#include "seq_queue.h"

queue_t *create_queue()
{
    queue_t *ptemp = (queue_t *)malloc(sizeof(queue_t));
    if(NULL == ptemp)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
        exit(-1);
    }
    memset(ptemp, 0, sizeof(queue_t));
    return ptemp;
}


int relese_queue(queue_t *my_queue)
{
    free(my_queue);
}


int queue_is_full(queue_t *my_queue)
{
    if(NULL == my_queue)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为空，请检查");
        return -1;
    }
    if((my_queue->rear + 1) % MAX == my_queue->front % MAX)
    {
        return 0;
    }
    return 1;
}



int queue_is_empty(queue_t *my_queue)
{
    if(NULL == my_queue)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为空，请检查");
        return -1;
    }
    if(my_queue->front == my_queue->rear)
    {
        return 0;
    }
    return 1;
}



int insert_queue(queue_t *my_queue, DATA_TYPE data)
{
    if(NULL == my_queue)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为空，请检查");
        return -1;
    }
    if(0 == queue_is_full(my_queue))
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"队已满，入队失败");
        return -1;
    }
    my_queue->data[my_queue->rear % MAX] = data;
    my_queue->rear++;
}



int get_data_from_queue(queue_t *my_queue)
{
    if(NULL == my_queue)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为空，请检查");
        return -1;
    }
    if(0 == queue_is_empty(my_queue))
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"队已空，出队失败");
        return -1;
    }
    printf("%d\n", my_queue->data[my_queue->front % MAX]);
    my_queue->front++;
}


int print_queue(queue_t *my_queue)
{
    if(NULL == my_queue)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为空，请检查");
        return -1;
    }
    if(0 == queue_is_empty(my_queue))
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"队已空，无需遍历");
        return -1;
    }
    int i = 0;
    queue_t *ptemp = my_queue;
    for(i = ptemp->front; i < my_queue->rear; i++)
    {
        printf("%d  ", my_queue->data[ptemp->front % MAX]);
        ptemp->front++;
    }
    putchar(10);
}
