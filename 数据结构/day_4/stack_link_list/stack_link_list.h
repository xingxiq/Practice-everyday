#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_TYPE int

typedef struct __NODE
{
    DATA_TYPE data;
    struct __NODE *next;
}node_t;

typedef struct __stack
{
    node_t *top;
    int lenth;
}stack_t;


stack_t *create_stack_link_list();
