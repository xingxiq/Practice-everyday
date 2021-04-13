#include "sequence.h"

int main()
{
    seq_list *my_list = create_seq_list();

    int pos = 0;
    char choose = 'y';
    DATA_TYPE data = 0;

    chushihua_seq_list(my_list);

    while('#' != choose)
    {
        Printf();
        printf("请输入要选择的功能:");
        scanf(" %c", &choose);
        switch(choose - '0')
        {
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

    release_seq_list(my_list);
    my_list = NULL;
    
    return 0;
}
