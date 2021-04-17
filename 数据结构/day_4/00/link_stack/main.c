#include "link_stack.h"

int main(){
	stack_t *my_stack = create_stack();
	push_stack(my_stack, 10);
	push_stack(my_stack, 20);
	push_stack(my_stack, 30);
	print_stack(my_stack);
	return 0;
}

