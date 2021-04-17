#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_TYPE int
#define MAX 4

typedef struct __QUEUE
{
    DATA_TYPE data[MAX];
    int front;
    int rear;
}queue_t;


queue_t *create_queue();
int relese_queue(queue_t *);
int queue_is_full(queue_t *);
int queue_is_empty(queue_t *);
int insert_queue(queue_t *, DATA_TYPE);
int get_data_from_queue(queue_t *);
int print_queue(queue_t *);
