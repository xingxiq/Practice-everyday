#include "sequence.h"

//创建顺序表
seq_list *create_seq_list(){
	seq_list *ptemp = (seq_list*)malloc(sizeof(seq_list));
	if(NULL == ptemp){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);//程序退出
	}
	//初始化为 0
	memset(ptemp,0,sizeof(seq_list));
	return ptemp;
}
//如果采用传参的方式申请空间,要注意值传递和地址传递的问题
int create_list2(seq_list **p){
	*p = (seq_list*)malloc(sizeof(seq_list));
	if(NULL == *p){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"malloc error");
		exit(-1);//程序退出
	}
}

//按位置插入数据
int insert_seq_list(seq_list* my_list,int pos,DATA_TYPE insert_data){
	if(NULL == my_list){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查");
		exit(-1);//程序退出
	}
	if(my_list->lenth == MAX){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"表满，插入失败");
		return -1;//函数返回调用处
	}
	if(pos < 0 || pos > my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"插入位置不合理，插入失败");
		return -1;//函数返回调用处
	}
	int i = 0;
	for(i=my_list->lenth; i>pos; i--){
		my_list->data[i] = my_list->data[i-1];
	}
	my_list->data[pos] = insert_data;
	my_list->lenth++;
}

//按位置删除顺序表中的元素
int delete_seq_list_by_pos(seq_list *my_list,int pos){
	if(NULL == my_list){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查");
		exit(-1);//程序退出
	}
	if(0 == my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"表空，删除失败");
		return -1;//函数返回调用处
	}
	if(0 > pos  ||  pos >= my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"删除位置不合理，删除失败");
		return -1;//函数返回调用处
	}
	int i = 0;
	for(i = pos+1; i < my_list->lenth; i++){
		my_list->data[i-1] = my_list->data[i];
	}
	my_list->lenth--;
}

//打印顺序表的所有成员
void show_seq_list(seq_list *my_list){
	int i = 0;
	for(i = 0; i < my_list->lenth; i++){
		printf("%d  ",my_list->data[i]);
	}
	printf("\n");
}

//顺序表的排序
int sort_seq_list(seq_list *my_list,int flag){
	//flag 为标志位    0 升序   1 降序
	if(NULL == my_list){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查");
		exit(-1);//程序退出
	}
	if(0!=flag && 1!=flag){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"flag不为0或1，请检查");
		return 0;
	}
	if(my_list->lenth <= 1 ){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"只有0个或1个元素，无需排序");
		return 0;
	}
	int i = 0,j = 0;
	if(0 == flag){
		for(i = 0 ; i < my_list->lenth-1; i++){
			for(j = 0; j < my_list->lenth - i - 1; j++){
				if(my_list->data[j] > my_list->data[j+1]){
					DATA_TYPE temp = my_list->data[j];
					my_list->data[j] = my_list->data[j+1];
					my_list->data[j+1] = temp;
				}
			}
		}
	}else if(1 == flag){
		for(i = 0 ; i < my_list->lenth-1; i++){
			for(j = 0; j < my_list->lenth - i - 1; j++){
				if(my_list->data[j] < my_list->data[j+1]){
					DATA_TYPE temp = my_list->data[j];
					my_list->data[j] = my_list->data[j+1];
					my_list->data[j+1] = temp;
				}
			}
		}
	}
}

//按照位置查找
DATA_TYPE search_seq_list(seq_list *my_list, int pos){
	if(NULL == my_list){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查");
		exit(-1);//程序退出
	}
	if(0 == my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"表空，查找数据失败");
		return -1;//函数返回调用处
	}
	if(0 > pos  ||  pos >= my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"查找位置不合理，查找失败");
		return -1;//函数返回调用处
	}
	return my_list->data[pos];
}

//修改顺序表对应位置的数据元素的值
int modify_seq_list(seq_list *my_list,int pos,DATA_TYPE new_data){
	if(NULL == my_list){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"入参为NULL，请检查");
		exit(-1);//程序退出
	}
	if(0 == my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"表空，修改数据失败");
		return -1;//函数返回调用处
	}
	if(0 > pos  ||  pos >= my_list->lenth){
		printf("%s(%d):%s\n",__FILE__,__LINE__,"修改的位置不合理，修改数据失败");
		return -1;//函数返回调用处
	}
	my_list->data[pos]  = new_data;
}

//释放顺序表
int release_seq_list(seq_list *p){
	free(p);
}
