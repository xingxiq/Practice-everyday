#include "sequence.h"

seq_list *create_seq_list()
{
    seq_list *my_list = (seq_list *)malloc(sizeof(seq_list));
    if(NULL == my_list)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
        exit(-1);
    }
    memset(my_list,0,sizeof(seq_list));
    return my_list;
}



int release_seq_list(seq_list *my_list)
{
    free(my_list);
}


int insert_seq_list(seq_list *my_list, int pos, DATA_TYPE insert_data)
{
    int i = 0;
    for(i = my_list->lenth; i > pos; i--)
    {
        my_list->data[i] = my_list->data[i - 1];
    }
    my_list->data[pos] = insert_data;
    my_list->lenth++;
}



int delete_seq_list_by_pos(seq_list *my_list, int pos)
{
    int i = 0;
    for(i = pos + 1; i <my_list->lenth; i++)
    {
        my_list->data[i - 1] = my_list->data[i];
    }
    my_list->lenth--;
}



void show_seq_list(seq_list *my_list)
{
    int i = 0;
    for(i = 0; i < my_list->lenth; i++)
    {
        printf("%d  ", my_list->data[i]);
    }
    printf("\n");
}



DATA_TYPE insert_data(seq_list *my_list, int pos)
{
    return my_list->data[pos];
}



int modify_seq_list(seq_list *my_list, int pos, DATA_TYPE new_data)
{
    my_list->data[pos] = new_data;
}



int sort_seq_list(seq_list *my_list,int flag)
{
    if(0 == flag)
    {
        int i = 0;
        int j = 0;
        for(i = 0; i < my_list->lenth - 1; i++)
        {
            for(j = 0; j < my_list->lenth - 1 - i; j++)
            {
                if(my_list->data[j] > my_list->data[j + 1])
                {
                    DATA_TYPE temp = my_list->data[j];
                    my_list->data[j] = my_list->data[j + 1];
                    my_list->data[j + 1] = temp;
                }
            }
        }
    }
    if(1 == flag)
    {
        int i = 0;
        int j = 0;
        for(i = 0; i < my_list->lenth - 1; i++)
        {
            for(j = 0; j < my_list->lenth - 1 - i; j++)
            {
                if(my_list->data[j] < my_list->data[j + 1])
                {
                    DATA_TYPE temp = my_list->data[j];
                    my_list->data[j] = my_list->data[j + 1];
                    my_list->data[j + 1] = temp;
                }
            }
        }
    }

}
