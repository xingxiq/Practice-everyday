#include "link_list.h"


int main(){
	//创建头节点
	node_t *phead1 = create_node(-1);
	insert_link_list(phead1, 0 , 10);
	insert_link_list(phead1, 1 , 30);
	insert_link_list(phead1, 2 , 50);
	node_t *phead2 = create_node(-1);
	insert_link_list(phead2, 0 , 20);
	insert_link_list(phead2, 1 , 40);
	insert_link_list(phead2, 2 , 60);
	show_link_list(phead1);
	show_link_list(phead2);
	hebing_link_list(phead1,phead2);
	show_link_list(phead1);
	//释放链表
	//release_link_list_1(phead);
	release_link_list_2(phead1);
	release_link_list_2(phead2);
	phead1 = NULL;
	phead2 = NULL;
}
