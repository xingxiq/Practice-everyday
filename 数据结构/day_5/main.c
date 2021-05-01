#include <stdio.h>
#include <stdlib.h>
#define DATA_TYPE char

typedef struct __NODE{
    	DATA_TYPE data;
    	struct __NODE *lchild; //left child  左
    	struct __NODE *rchild; //right child  右
}node_t;

int create_node(node_t **root_node){
	char insert_data;
	scanf("%c",&insert_data);
	getchar();
	if('#' == insert_data){
		return 0;
	}
	*root_node = (node_t *)malloc(sizeof(node_t));
	if(NULL == *root_node){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	(*root_node)->data = insert_data;
	(*root_node)->lchild = NULL;
	(*root_node)->rchild = NULL;
	create_node(&((*root_node)->lchild));
	create_node(&((*root_node)->rchild));
}

int qianxu(node_t *root_node){
	if(NULL == root_node){
		//printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL");
		return 0;
	}
	printf("%c\n",root_node->data);
	qianxu(root_node->lchild);
	qianxu(root_node->rchild);
}


int zhongxu(node_t *root_node){
	if(NULL == root_node){
		//printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL");
		return 0;
	}
	zhongxu(root_node->lchild);
	printf("%c\n",root_node->data);
	zhongxu(root_node->rchild);
}


int houxu(node_t *root_node){
	if(NULL == root_node){
		//printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL");
		return 0;
	}
	houxu(root_node->lchild);
	houxu(root_node->rchild);
	printf("%c\n",root_node->data);
}

int main(int argc, const char *argv[])
{
	node_t *root_node = NULL;
	create_node(&root_node);
    printf("--------------------------\n");
	qianxu(root_node);
	return 0;
}
