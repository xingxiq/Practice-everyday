#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DATA_TYPE int

typedef struct __NODE
{
	DATA_TYPE data;
	struct __NODE *next;
}node_t;

typedef struct __QUEUE
{
	node_t *front;
	node_t *rear;
}queue_t;

queue_t *create_queue();
node_t *create_node(DATA_TYPE);
int insert_queue(queue_t *,DATA_TYPE);
int print_queue(queue_t*);
int delete_queue(queue_t *, DATA_TYPE *);
