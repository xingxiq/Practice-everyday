#include "link_list.h"

//创建节点（也就是数据元素）
node_t *create_node(DATA_TYPE insert_data){
	//为新的节点申请空间
	node_t *ptemp = (node_t*)malloc(sizeof(node_t));
	if(NULL == ptemp){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);
	}
	//初始化新节点的值
	ptemp->data = insert_data;
	ptemp->next = NULL;
	return ptemp;
}

//求链表的长度（不包含头节点的）
int get_link_list_lenth(node_t *phead){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	int count=0;
	node_t *ptemp = phead;
	while(NULL != ptemp->next){
		count++;
		ptemp = ptemp->next;
	}
	return count;
}

//按位置插入数据
int insert_link_list(node_t *phead, int pos, DATA_TYPE insert_data){
	//对NULL入参进行检查
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	//对插入位置进行检查
	if(0 > pos || pos > get_link_list_lenth(phead)){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"插入位置不合理");
		return -1;	
	}
	//创建要插入的新节点
	node_t *pnew = create_node(insert_data);
	node_t *ptemp = phead;  //保存phead的值，防止后续的操作找不到头节点位置了
	int i = 0;
	//找到插入位置的上一位置
	for(i=0; i < pos; i++){
		ptemp = ptemp->next;
	}
	//插入操作
	pnew->next = ptemp->next;
	ptemp->next = pnew;
}

int delete_link_list_by_pos(node_t *phead,int pos){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	if( 0 > pos  || pos >= get_link_list_lenth(phead)){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"删除位置不合理，请检查");
		return -1;
	}
	node_t *ptemp = phead;
	int i = 0;
	//找到要删除位置的上一位置
	for(i=0; i < pos; i++){
		ptemp = ptemp->next;
	}
	//删除操作，  pdel的作用是保存要删除的节点的地址，留给free()使用
	node_t *pdel = ptemp->next;
	ptemp->next = pdel->next;
	pdel->next = NULL;
	free(pdel);
	pdel = NULL;
	return 0;
}

//遍历链表
void show_link_list(node_t *phead){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	node_t *ptemp = phead;
	while(NULL != ptemp->next){
		printf("%d  ",ptemp->next->data);
		ptemp = ptemp->next;
	}
	printf("\n");
}

//释放链表方法1   ----调用 获取长度的函数 及 删除元素的函数  实现
void release_link_list_1(node_t *phead){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	int i = 0;
	for(i = 0; i < get_link_list_lenth(phead); i++){
		delete_link_list_by_pos(phead,0);
	}
	free(phead);
}

//释放链表方法2   ----不掉用其他函数   独立实现
void release_link_list_2(node_t *phead){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	node_t *pdel = NULL;
	while(phead->next != NULL){
		pdel = phead->next;
		phead->next = pdel->next;
		pdel->next = NULL;
		free(pdel);
	}
	free(phead);
}

//在链表获取指定位置的数据
int get_data_from_link_list(node_t *phead,int pos,DATA_TYPE *var){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	if( 0 > pos  || pos >= get_link_list_lenth(phead)){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"查询位置不合理，请检查");
		return -1;
	}
	node_t *ptemp = phead;
	int i = 0;
	for(i=0; i < pos; i++){
		ptemp = ptemp->next;//获取要取值的上一节点
	}
	*var = ptemp->next->data;//将下一节点的值获取到
}

//修改链表中指定位置的数据
int modify_link_list_by_pos(node_t *phead,int pos,DATA_TYPE var){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	if( 0 > pos  || pos >= get_link_list_lenth(phead)){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"查询位置不合理，请检查");
		return -1;
	}
	node_t *ptemp = phead;
	int i = 0;
	for(i=0; i < pos; i++){
		ptemp = ptemp->next;//遍历找到要修改的上一节点
	}
	ptemp->next->data = var;//修改下一节点数据域的值
}

//链表的排序
int sort_link_list(node_t *phead){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	if(NULL == phead->next){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"只有头节点,无需排序");
		return -1;	
	}
	if(NULL == phead->next->next){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"只有1个节点,无需排序");
		return -1;	
	}
	node_t *p1 = phead->next;
	node_t *p2 = p1->next;
	while(NULL != p1->next){
		while(NULL != p2){
			if(p1->data > p2->data){
				DATA_TYPE temp = p1->data;
				p1->data = p2->data;
				p2->data = temp;
			}
			p2 = p2->next;
		}
		p1 = p1->next;
		p2 = p1->next;
	}
}

//链表的翻转
int flip_link_list(node_t *phead){
	if(NULL == phead){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	if(NULL == phead->next){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"只有头节点,无需翻转");
		return -1;	
	}
	if(NULL == phead->next->next){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"只有1个节点,无需翻转");
		return -1;	
	}
	node_t *p1 = phead->next->next;
	phead->next->next = NULL;
	node_t *p2 = NULL;
	while(NULL != p1){
		p2 = p1->next;
		p1->next = phead->next;
		phead->next = p1;
		p1 = p2;
	}
}

//两个链表合并
int hebing_link_list(node_t *phead1,node_t *phead2){
	if(NULL == phead1 || NULL == phead2){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"头节点为空,请检查");
		exit(-1);
	}
	node_t *p1 = phead1;
	while(NULL != p1->next){
		p1 = p1->next;
	}
	p1->next = phead2->next;
	free(phead2);
	sort_link_list(phead1);
}
