#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_TYPE int
#define MAX 64

typedef struct __SEQ{
	DATA_TYPE data[MAX];
	int lenth;
}seq_list;

seq_list *create_seq_list();
int release_seq_list(seq_list*);
int insert_seq_list(seq_list*,int,DATA_TYPE);
int delete_seq_list_by_pos(seq_list *,int);
void show_seq_list(seq_list *);
DATA_TYPE search_seq_list(seq_list*,int);
int modify_seq_list(seq_list*,int,DATA_TYPE);
int sort_seq_list(seq_list*,int);
