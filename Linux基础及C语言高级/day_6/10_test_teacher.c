#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 40

typedef struct __STUDENT{
	int id;
	char name[32];
	char sex;
	int score;
}Student;

typedef struct __CLASS{
	struct __STUDENT stu[MAX_NUM];
	int count;
}Class;

int add_student(Class *my_class){
	if(NULL == my_class){
		printf("%s(%d):如参为空",__FILE__,__LINE__);
		exit(-1);
	}
	printf("please input (id name sex score)\n");
	scanf("%d",&(my_class->stu[my_class->count].id));
	scanf("%s",my_class->stu[my_class->count].name);
	scanf(" %c",&(my_class->stu[my_class->count].sex));
	scanf("%d",&(my_class->stu[my_class->count].score));
	my_class->count++;
}

int seach_student(Class *my_class){
	if(NULL == my_class){
		printf("%s(%d):如参为空",__FILE__,__LINE__);
		exit(-1);
	}
	int i = 0;
	printf("\n id  name   sex  score\n");
	for(i = 0; i < my_class->count; i++){
		printf("%d  %s  %c  %d\n",
				my_class->stu[i].id,
				my_class->stu[i].name,
				my_class->stu[i].sex,
				my_class->stu[i].score);
	}
}

int modify_student(Class *my_class){
	if(NULL == my_class){
		printf("%s(%d):如参为空",__FILE__,__LINE__);
		exit(-1);
	}
	char modify_name[32];
	printf("请输入要修改的学生的姓名\n");
	scanf("%s",modify_name);
	int i = 0;
	for(i = 0; i < my_class->count; i++){
		if(0 == strcmp(modify_name, my_class->stu[i].name)){
			printf("请输入新的成绩  (score)");
			scanf("%d",&(my_class->stu[i].score));
			break;
		}
	}
	if(i == my_class->count){
		printf("查无此人\n");
		return 0;
	}
}

int delete_student(Class *my_class){
	if(NULL == my_class){
		printf("%s(%d):如参为空",__FILE__,__LINE__);
		exit(-1);
	}
	char delete_name[32];
	printf("请输入要删除的学生姓名\n");
	scanf("%s",delete_name);
	int i = 0, j = 0;
	int old_count = my_class->count;
	for(i = 0; i < my_class->count; i++){
		if(0 == strcmp(delete_name, my_class->stu[i].name)){
			for(j = i + 1; j < my_class->count; j++){
				my_class->stu[j-1] = my_class->stu[j];
			}
			my_class->count--;
		}
	}
	if(old_count == my_class->count){
		printf("查无此人\n");
		return 0;
	}

}
int sort_student(Class *my_class){
	if(NULL == my_class){
		printf("%s(%d):如参为空",__FILE__,__LINE__);
		exit(-1);
	}
	int i = 0, j = 0;
	for(i = 0; i < my_class->count-1 ; i++){
		for(j = 0; j < my_class->count-1-i; j++){
			if(my_class->stu[j].score < my_class->stu[j+1].score){
				Student temp = my_class->stu[j];
				my_class->stu[j] = my_class->stu[j+1];
				my_class->stu[j+1] = temp;
			}
		}
	}
}

int print_menu(){
	printf("-------------------------------------------------\n");
	printf("##  1.增加学生    2.查询学生   3.修改学生信息  ##\n");
	printf("##  4.删除学生    5.根据成绩排序  6.退出程序   ##\n");
	printf("-------------------------------------------------\n");
}


int main()
{
	int choose;
	Class my_class;
	my_class.count = 0;
	while(1){
		print_menu();
		scanf("%d",&choose);
		switch(choose){
			case 1:
				add_student(&my_class);
				break;
			case 2:
				seach_student(&my_class);
				break;
			case 3:
				modify_student(&my_class);
				break;
			case 4:
				delete_student(&my_class);
				break;
			case 5:
				sort_student(&my_class);
				break;
			case 6:
				exit(0);
			default:
				printf("input errror, please input again\n");			
				break;
		}
	}
	return 0;
}

