#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_TYPE int
#define MAX 5

typedef struct __stack
{
    DATA_TYPE data[MAX];
    int top;
}stack_t;
stack_t *create_stack();//创建栈
int release_stack(stack_t *);//释放栈
int stack_is_full(stack_t *);//判定栈是否满
int stack_is_empty(stack_t *);//判定栈是否空
int put_stack(stack_t *, DATA_TYPE);//如栈
int print_stack(stack_t *);//遍历打印
int pop_stack(stack_t *, DATA_TYPE);//出栈
