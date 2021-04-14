#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_TYPE int
#define MAX 64

typedef struct __SEQ
{
    DATA_TYPE data[MAX];
    int lenth;
}seq_list;

seq_list *create_seq_list();
int release_seq_list(seq_list *);//释放空间
int insert_seq_list(seq_list *, int, DATA_TYPE);//指定位置插入值
int delete_seq_list(seq_list *, int);//指定位置删除
int traverse_seq_list(seq_list *);//遍历打印输出
int delete_value_seq_list(seq_list *, int);//指定值位置删除
void Printf(int);//打印提示表单
int chushihua_seq_list(seq_list *);//预设初始值
void choose_seq_list(seq_list *);//功能选择
