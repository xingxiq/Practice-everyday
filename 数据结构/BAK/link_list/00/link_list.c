#include "link_list.h"

node_t *create_node(DATA_TYPE data)
{
    node_t *ptemp = (node_t *)malloc(sizeof(node_t));
    if (NULL == ptemp)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"mallc error");
        exit(-1);
    }
    ptemp->data = data;
    ptemp->next = NULL;
    return ptemp;
}



int get_link_list_lenth(node_t *phead)
{
    int count = 0;
    node_t *ptemp = phead;
    while(NULL != ptemp->next)
    {
        count++;
        ptemp = ptemp->next;
    }
    return 0;
}



int insert_link_list(node_t *phead, int pos, DATA_TYPE insert_data)
{
    int i = 0;
    node_t *ptemp = phead;
    node_t *pnew = create_node(insert_data);
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    pnew->next = ptemp->next;
    ptemp->next = pnew;
}



void show_link_list(node_t *phead)
{
    node_t *ptemp = phead;
    while(NULL != ptemp->next)
    {
        printf("%d  ",ptemp->next->data);
        ptemp = ptemp->next;
    }
    printf("\n");
}



int delete_link_list_by_pos(node_t *phead, int pos)
{
    node_t *pdel = NULL;
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    pdel = ptemp->next;
    ptemp->next = pdel->next;
    pdel->next = NULL;
    free(pdel);
    pdel = NULL;
}


void release_link_list_1(node_t *phead)
{
    int i = 0;
    for(i = 0; i < get_link_list_lenth(phead); i++)
    {
        delete_link_list_by_pos(phead, 0);
    }
    free(phead);
}


void release_link_list_2(node_t *phead)
{
    node_t *pdel = NULL;
    while(NULL != phead->next)
    {
        pdel = phead->next;
        phead->next = pdel->next;
        pdel->next = NULL;
        free(pdel);
        pdel = NULL;
    }
}



int get_data_from_link_list(node_t *phead, int pos, DATA_TYPE *value)
{
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    *value = ptemp->next->data;
}


int modify_link_list_by_pos(node_t *phead, int pos, DATA_TYPE new_data)
{
    node_t *ptemp = phead;
    int i = 0;
    for(i = 0; i < pos; i++)
    {
        ptemp = ptemp->next;
    }
    ptemp->next->data = new_data;
}


int hebing_link_list(node_t *p1, node_t *p2)
{
    while(NULL != p1->next)
    {
        p1 = p1->next;
    }
    p1->next = p2->next;
}


int sort_link_list(node_t *phead)
{
    node_t *p1 = phead->next;
    node_t *p2 = p1->next;
    while(NULL != p1->next)
    {
        while(NULL != p2)
        {
            if(p1->data < p2->data)
            {
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


int flip_link_list(node_t *phead)
{
    node_t *p1 = phead->next->next;
    node_t *p2 = NULL;
    phead->next->next = NULL;
    while(NULL != p1)
    {
        p2 = p1->next;
        p1->next = phead->next;
        phead->next = p1;
        p1 = p2;
    }
}
