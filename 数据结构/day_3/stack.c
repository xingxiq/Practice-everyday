#include "stack.h"

stack_t *create_stack()
{
    stack_t *my_stack = (stack_t *)malloc(sizeof(stack_t));
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        exit(-1);
    }
    memset(my_stack, 0, sizeof(stack_t));
    return my_stack;
}

int release_stack(stack_t *my_stack)
{
    free(my_stack);
    my_stack = NULL;
}

int stack_is_full(stack_t *my_stack)
{
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        return -1;
    }
    if(MAX == my_stack->top)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "栈满");
        return 0;
    }
    return 1;
}

int stack_is_empty(stack_t *my_stack)
{
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        return -1;
    }
    if(0 == my_stack->top)
    {
        return -1;
    }
    return 1;
}

int put_stack(stack_t *my_stack, DATA_TYPE value)
{
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        return -1;
    }
    if(0 == stack_is_full(my_stack))
    {
        return -1;
    }
    my_stack->data[my_stack->top] = value;
    my_stack->top++;
}

int print_stack(stack_t *my_stack)
{
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        return -1;
    }
    if(0 == stack_is_empty(my_stack))
    {
        return -1;
    }
    int i = 0;
    for(i = 0; i < my_stack->top; i++)
    {
        printf("%d ",my_stack->data[i]);
    }

}

int pop_stack(stack_t *my_stack, DATA_TYPE data)
{
    if(NULL == my_stack)
    {
        printf("%s(%d):%s\n", __FILE__, __LINE__, "malloc error");
        return -1;
    }
    if(0 == stack_is_empty(my_stack))
    {
        return -1;
    }
    printf("%d", my_stack->data[my_stack->top-1]);
    free(&my_stack->data[my_stack->top-1]);
}
