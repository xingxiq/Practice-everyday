#include "link_queue.h"

//创建队列
queue_t *create_queue(){
	queue_t *ptemp = (queue_t*)malloc(sizeof(queue_t));
	if(NULL == ptemp){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	ptemp->front = NULL;
	ptemp->rear = NULL;
	return ptemp;
}

//创建链表节点
node_t *create_node(DATA_TYPE insert_data){
	node_t *ptemp = (node_t*)malloc(sizeof(node_t));
	if(NULL == ptemp){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	ptemp->data = insert_data;
	ptemp->next = NULL;
	return ptemp;
}

int insert_queue(queue_t *my_queue,DATA_TYPE insert_data){
	if(NULL == my_queue){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	node_t *pnew = create_node(insert_data);
	if(NULL == my_queue->front && NULL == my_queue->rear){
		my_queue->front = pnew;
		my_queue->rear = pnew;
	}else{
		my_queue->rear->next = pnew;
		my_queue->rear = pnew;
	}
}

//遍历队列
int print_queue(queue_t *my_queue){
	if(NULL == my_queue){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	node_t *ptemp = my_queue->front;
	while(NULL != ptemp){
		printf("%d  ",ptemp->data);
		ptemp = ptemp->next;
	}
	printf("\n");
}


int delete_queue(queue_t *my_queue, DATA_TYPE *value)
{
	if(NULL == my_queue){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
    *value = my_queue->front->data;
    node_t *pdel = my_queue->front;
    my_queue->front = pdel->next;
    pdel->next = NULL;
    free(pdel);
    pdel = NULL;
}
