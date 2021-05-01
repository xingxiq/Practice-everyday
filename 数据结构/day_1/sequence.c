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
            for(j = i; j < my_list->lenth - 1; j++)
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
    if(NULL == my_list)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "入参为NULL，请检查");
        exit(-1);
    }
    if(my_list->lenth == 0)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "表空，遍历失败");
        return -1;
    }

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


void Printf(int lenth)
{
    printf("-------------------------------------------\n");
    if(0 == lenth)
    {
    printf("##          0.设定预设值my_list          ##\n");
    }
    printf("##  1.指定位置输入值   2.指定位置删除值  ##\n");
    printf("##  3.遍历打印输出值   4.指定值位置删除  ##\n");
    printf("-------------------------------------------\n");
}


int chushihua_seq_list(seq_list *my_list)
{
    if(NULL == my_list)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "入参为NULL，请检查");
        exit(-1);
    }
    printf("请输入预设my_list的个数:");
    scanf("%d", &my_list->lenth);
    printf("请输入%d个预设值:", my_list->lenth);
    int i = 0;
    for(i = 0; i < my_list->lenth; i++)
    {
        scanf("%d", &my_list->data[i]);
    }
}

void choose_seq_list(seq_list *my_list)
{ 
    int pos = 0;
    char choose = 'y';
    DATA_TYPE data = 0;
    while('#' != choose)
    {
        Printf(my_list->lenth);
        printf("请输入要选择的功能:");
        scanf(" %c", &choose);
        switch(choose - '0')
        {
        case 0:
            chushihua_seq_list(my_list);
            break;
        case 1:
            printf("请依次输入插入位置:");
            scanf("%d", &pos);
            printf("请依次输入插入数值:");
            scanf("%d", &data);
            insert_seq_list(my_list, pos, data);
            break;
        case 2:
            printf("请输入要删除的位置:");
            scanf("%d", &pos);
            delete_seq_list(my_list, pos);
            break;
        case 3:
            traverse_seq_list(my_list);
            break;
        case 4:
            printf("请输入要删除的数值:");
            scanf("%d", &data);
            delete_value_seq_list(my_list, data);
            break;
        }
    }


}
