#include "link_queue.h"

int main(){
	queue_t *my_queue = create_queue();

	insert_queue(my_queue,10);
	insert_queue(my_queue,20);
	insert_queue(my_queue,30);
	insert_queue(my_queue,40);
	insert_queue(my_queue,50);
	
	print_queue(my_queue);


    DATA_TYPE value;
    delete_queue(my_queue, &value);
    printf("%d\n", value);
	print_queue(my_queue);

	return 0;
}
