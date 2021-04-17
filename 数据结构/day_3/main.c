#include "stack.h"

int main()
{
    stack_t *my_stack = NULL;
    my_stack = create_stack();
    release_stack(my_stack);


    return 0;
}
