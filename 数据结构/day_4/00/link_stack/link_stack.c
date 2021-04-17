#include "link_stack.h"

//创建数据节点
node_t *create_data_node(DATA_TYPE insert_data){
	node_t *ptemp = (node_t*)malloc(sizeof(node_t));
	if(NULL == ptemp){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	memset(ptemp,0,sizeof(node_t));
	ptemp->data = insert_data;
	ptemp->next = NULL;
	return ptemp;
}

//创建栈
stack_t *create_stack(){
	stack_t *ptemp = (stack_t*)malloc(sizeof(stack_t));
	if(NULL == ptemp){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	memset(ptemp,0,sizeof(stack_t));
	ptemp->top = NULL;
	return ptemp;
}

//入栈
int push_stack(stack_t *my_stack,DATA_TYPE data){
	if(NULL == my_stack){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查入参");
		return -1;
	}
	node_t *pnew = create_data_node(data);	
	pnew->next = my_stack->top;
	my_stack->top = pnew;
	my_stack->lenth++;
}

int pop_stack(stack_t *my_stack)
{
	if(NULL == my_stack){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查入参");
		return -1;
	}
    if(0 == my_stack->lenth)
    {
		printf("%s(%d):%s\n",__FILE__,__LINE__,"栈内为空，出栈失败");
		return -1;
    }
    node_t *pdel = my_stack->top;
    my_stack->top = pdel->next;
    free(pdel);
    pdel = NULL;
    my_stack->lenth--;
}


int print_stack(stack_t *my_stack){
	if(NULL == my_stack){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查入参");
		return -1;
	}
	node_t *ptemp = my_stack->top;
	while(NULL != ptemp){
		printf("%d  ",ptemp->data);
		ptemp = ptemp->next;
	}
	printf("\n");
}







