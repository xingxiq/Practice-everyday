#include "sequence.h"

int main(){
	seq_list *my_list = create_seq_list();
	insert_seq_list(my_list, 0, 10);
	insert_seq_list(my_list, 1, 20);
	insert_seq_list(my_list, 0, 30);
	insert_seq_list(my_list, 0, 40);
	show_seq_list(my_list);
	sort_seq_list(my_list,0);
	//printf("查找的结果为 : %d\n",search_seq_list(my_list,1));
	//modify_seq_list(my_list, 3, 50);
	show_seq_list(my_list);
	sort_seq_list(my_list,1);
	show_seq_list(my_list);

	release_seq_list(my_list);
	my_list = NULL;
	return 0;
}

