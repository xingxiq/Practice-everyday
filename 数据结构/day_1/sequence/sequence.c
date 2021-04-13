#include "sequence.h"

seq_list *create_seq_list()
{
    seq_list *ptemp = (seq_list*)malloc(sizeof(seq_list));
    if (NULL == ptemp)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
        exit(0);
    }

    memset(ptemp,0,sizeof(seq_list));
    return ptemp;
}

int create_list2(seq_list **p)
{
    *p = (seq_list *)malloc(sizeof(seq_list));
    if(NULL == *p)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
        exit(0);
    }
}


int insert_seq_list(seq_list *my_list, int pos, DATA_TYPE insert_data)
{
    if(NULL == my_list)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "入参为NULL，请检查");
        exit(-1);
    }
    if(my_list->lenth == MAX)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "表满，插入失败");
        return -1;
    }
    if(pos < 0 || pos > my_list->lenth)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "插入位置不合理，插入失败");
        return -1;
    }
    int i = 0;
    for(i = my_list->lenth; i > pos; i--)
    {
        my_list->data[i] = my_list->data[i-1];
    }
    my_list->data[pos] = insert_data;
    my_list->lenth++;
}

int delete_seq_list(seq_list *my_list, int pos)
{
    if(NULL == my_list)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "入参为NULL，请检查");
        exit(-1);
    }
    if(my_list->lenth == 0)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "表空，删除失败");
        return -1;
    }
    if(pos < 0 || pos >= my_list->lenth)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "删除位置不合理，删除失败");
        return -1;
    }
    int i = 0;
    for(i = pos; i < my_list->lenth - 1; i++)
    {
        my_list->data[i] = my_list->data[i+1];
    }
    my_list->lenth--;
}

int delete_value_seq_list(seq_list *my_list, int data)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < my_list->lenth; i++)
    {
        if(data == my_list->data[i])
        {
            for(j = i; j < my_list->lenth; j++)
            {
                my_list->data[j] = my_list->data[j + 1];
            }
            my_list->lenth--;
            i--;
        }
    }
}

int traverse_seq_list(seq_list *my_list)
{
    int i = 0;
    printf("my_list的值为:");
    for(i = 0; i < my_list->lenth; i++)
    {
        printf("%-4d",my_list->data[i]);
    }
    putchar(10);
}

int release_seq_list(seq_list *p)
{
    free(p);
}


void Printf()
{
    printf("-------------------------------------------\n");
    printf("##  1.指定位置输入值   2.指定位置删除值  ##\n");
    printf("##  3.遍历打印输出值   4.指定值位置删除  ##\n");
    printf("-------------------------------------------\n");
}


void chushihua_seq_list(seq_list *my_list)
{
    printf("请输入预设my_list的个数:");
    scanf("%d", &my_list->lenth);
    printf("请输入%d个预设值:", my_list->lenth);
    int i = 0;
    for(i = 0; i < my_list->lenth; i++)
    {
        scanf("%d", &my_list->data[i]);
    }
}
