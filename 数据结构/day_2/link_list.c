#include "link_list.h"

node_t *create_node(DATA_TYPE insert_data)
{
    node_t *ptemp = (node_t *)malloc(sizeof(node_t));
    if(NULL == ptemp)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        exit(-1);
    }
    ptemp->data = insert_data;
    ptemp->next = NULL;
    return ptemp;
}


int get_link_list_lenth(node_t *phead)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    int count = 0;
    node_t *ptemp = phead;
    while(NULL != ptemp->next)
    {
        count++;
        ptemp = ptemp->next;
    }
    return count;
}

int insert_link_list(node_t *phead, int pos, DATA_TYPE insert_data)


{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    if(0 > pos || pos > get_link_list_lenth(phead))
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "插入位置不合理");
        return -1;
    }
    node_t *pnew = create_node(insert_data);
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    pnew->next = ptemp->next;
    ptemp->next = pnew;
}

int delete_link_list_by_pos(node_t *phead, int pos)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    if(0 > pos || pos >= get_link_list_lenth(phead))
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "插入位置不合理");
        return -1;
    }
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    node_t *pdel = ptemp->next;
    ptemp->next = pdel->next;
    pdel->next = NULL;
    free(pdel);
    pdel = NULL;
    return 0;
}

void show_link_list(node_t *phead)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    node_t *ptemp = phead;
    while(NULL != ptemp->next)
    {
        printf("%d  ", ptemp->next->data);
        ptemp = ptemp->next;
    }
    printf("\n");
}


//释放链表方法1
void release_link_list_1(node_t *phead)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    int i = 0;
    for(i = 0; i < get_link_list_lenth(phead); i++)
    {
        delete_link_list_by_pos(phead, 0);
    }
    free(phead);
}

void release_link_list_2(node_t *phead)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    node_t *pdel = NULL;
    while(phead->next != NULL)
    {
        pdel = phead->next;;
        phead->next = pdel->next;
        pdel->next = NULL;
        free(pdel);
    }
    free(phead);
}


int search_link_list(node_t *phead, int pos)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    if(0 > pos || pos >= get_link_list_lenth(phead))
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "要搜索位置的不合理");
        return -1;
    }
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    printf("%d\n", ptemp->next->data);

}

int change_link_list(node_t *phead, int pos, DATA_TYPE data)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    if(0 > pos || pos >= get_link_list_lenth(phead))
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "要修改的位置不合理");
        return -1;
    }
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    ptemp->next->data = data;
}


int sort_link_list(node_t *phead)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    if(2 > get_link_list_lenth(phead))
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "要排序的的元素小于2个，无需进行排序");
        return -1;
    }
    int i = 0;
    int j = 0;
    node_t *ptemp_a = phead->next;
    node_t *ptemp_b = ptemp_a->next;
    for(i = 0; i < get_link_list_lenth(phead) - 1; i++)
    {
        ptemp_b = ptemp_a->next;
        for(j = i + 1; j < get_link_list_lenth(phead); j++)
        {
            if(ptemp_a->data > ptemp_b->data)
            {
                DATA_TYPE temp = ptemp_a->data;
                ptemp_a->data = ptemp_b->data;
                ptemp_b->data = temp;
            }
            ptemp_b = ptemp_b->next;
        }
        ptemp_a = ptemp_a->next;
    }
}




void Printf(node_t *phead)
{
    printf("-------------------------------------------\n");
    if(0 == get_link_list_lenth(phead))
    {
    printf("##            0.预设初始链表值           ##\n");
    }
    printf("##  1.指定位置插入值   2.指定位置删除值  ##\n");
    printf("##  3.按位置查找       4.遍历链表        ##\n");
    printf("##  5.链表排序         6.按值删除        ##\n");
    printf("##  7.按值更改         #.退出            ##\n");
    printf("-------------------------------------------\n");
    printf("请选择功能:\n");
}


int choose_link_list(node_t *phead)
{
    DATA_TYPE data = 0;
    int pos = 0;
    char choose = 'y';
    while('#' != choose)
    {
        Printf(phead);
        scanf(" %c", &choose);
        switch(choose)
        {
        case '0':
            chushihua_link_list(phead);
            break;
        case '1':
            printf("请输入要插入的位置:\n");
            scanf("%d", &pos);
            printf("请输入要插入的数值:\n");
            scanf("%d", &data);
            insert_link_list(phead, pos, data);
            break;
        case '2':
            printf("请输入要删除的位置:\n");
            scanf("%d", &pos);
            delete_link_list_by_pos(phead, pos);
            break;
        case '3':
            printf("请输入要查找的位置:\n");
            scanf("%d", &pos);
            search_link_list(phead, pos);
            break;
        case '4':
            show_link_list(phead);
            break;
        case '5':
            sort_link_list(phead);
            break;
        case '6':
            printf("请输入要删除的值:\n");
            scanf("%d", &pos);
            delete_link_list_by_value(phead, pos);
            break;
        case '7':
            printf("请输入要修改的值:\n");
            scanf("%d", &pos);
            printf("请输入要修改后的值:\n");
            scanf("%d", &data);
            change_link_list_by_value(phead, pos, data);
            break;
        }
    }

}

int chushihua_link_list(node_t *phead)
{
    int n = 0;
    printf("请输入预设链表的个数:\n");
    scanf("%d", &n);
    int i = 0;
    DATA_TYPE data;
    printf("请输入预设链表值:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insert_link_list(phead, i, data);
    }
}

int delete_link_list_by_value(node_t *phead, DATA_TYPE data)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    int i = 0;
    node_t *ptemp = phead;
    node_t *pdel;
    for(i = 0; i < get_link_list_lenth(phead); i++)
    {
        if(data == ptemp->next->data)
        {
            pdel = ptemp->next;
            ptemp->next = pdel->next;
        }
        else
        {
            ptemp = ptemp->next;
        }
    }
    pdel->next = NULL;
    free(pdel);
    pdel = NULL;
}

int change_link_list_by_value(node_t *phead, int pos, DATA_TYPE data)
{
    if(NULL == phead)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "头节点为空，请检查");
        exit(-1);
    }
    int i = 0;
    node_t *ptemp = phead;
    for(i = 0; i < get_link_list_lenth(phead); i++)
    {
        if(pos == ptemp->next->data)
        {
            ptemp->next->data = data;
        }
            ptemp = ptemp->next;
    }
}
