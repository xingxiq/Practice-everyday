#include "seq_queue.h"

int main()
{
    queue_t *my_queue = create_queue();

    insert_queue(my_queue, 10);
    insert_queue(my_queue, 20);
    insert_queue(my_queue, 30);
    
    print_queue(my_queue);


    get_data_from_queue(my_queue);

    relese_queue(my_queue);
    my_queue = NULL;

    return 0;
}
