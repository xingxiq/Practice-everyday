#include "stack_link_list.h"

stack_t *create_stack_link_list()
{
    stack_t *my_stack = (stack_t *)malloc(sizeof(stack_t));
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
        exit(-1);
    }
    memset(my_stack, 0, sizeof(stack_t));
    return my_stack;
}
