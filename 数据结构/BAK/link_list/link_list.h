#include <stdio.h>
#include <stdlib.h>
#define DATA_TYPE int

typedef struct __NODE{
	DATA_TYPE data;
	struct __NODE *next;
}node_t;

node_t *create_node(DATA_TYPE);
int get_link_list_lenth(node_t*);
int insert_link_list(node_t*,int,DATA_TYPE);
void show_link_list(node_t*);
int delete_link_list_by_pos(node_t*,int);
void release_link_list_1(node_t*);
void release_link_list_2(node_t*);
int get_data_from_link_list(node_t*,int,DATA_TYPE*);
int modify_link_list_by_pos(node_t*,int,DATA_TYPE);
int sort_link_list(node_t*);
int flip_link_list(node_t*);
int hebing_link_list(node_t*,node_t*);
