#include "link_list.h"

int main()
{
    node_t *phead = create_node(-1);
    
    choose_link_list(phead);

    //释放链表
    //release_link_list_1(phead);

    release_link_list_2(phead);
    phead = NULL;
}
