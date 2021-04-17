#include <stdio.h>
#include <stdlib.h>
#define DATA_TYPE int

typedef struct __NODE
{
    DATA_TYPE data;
    struct __NODE *next;
}node_t;

node_t *create_node(DATA_TYPE);//创建链表
int get_link_list_lenth(node_t *);//获取链表长度
int insert_link_list(node_t *, int, DATA_TYPE);//在指定位置插入链表
void show_link_list(node_t *);//遍历链表
int delete_link_list_by_pos(node_t *, int);//在指定位置删除链表
void release_link_list_1(node_t *);//释放链表空间
void release_link_list_2(node_t *);//释放链表空间
int search_link_list(node_t *, int);//按位置查找数据
int change_link_list(node_t *, int, DATA_TYPE);///按位置修改数据
int sort_link_list(node_t *);//排序
void Printf(node_t *);//打印提示表单
int choose_link_list(node_t *);//功能选择
int chushihua_link_list(node_t *);//初始化链表
int delete_link_list_by_value(node_t *, DATA_TYPE);
int change_link_list_by_value(node_t *, int, DATA_TYPE);
