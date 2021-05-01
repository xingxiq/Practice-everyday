#include "sequence.h"

int main()
{
    seq_list *my_list = create_seq_list();


    choose_seq_list(my_list);

    release_seq_list(my_list);
    my_list = NULL;
    
    return 0;
}
