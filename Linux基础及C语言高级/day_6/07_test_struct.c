#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __Student
{
    int id;
    char name[30];
    char sex;
    int score;
}Student;

typedef struct __Class
{
    Student my_stu[60];
    int count;
}Class;

void Printf()
{
    printf("------------------------------------------\n");
    printf("## 1.增加学员   2.查询学员   3.修改学员 ##\n");
    printf("## 4.删除学员   5.排序学员   6.推出exit ##\n");
    printf("------------------------------------------\n");

}

void add(Class *my_class)
{
    printf("请输入(id name sex score)!\n");
    scanf("%d", &(my_class->my_stu[my_class->count].id));
    scanf("%s", my_class->my_stu[my_class->count].name);
    getchar();
    scanf("%c", &(my_class->my_stu[my_class->count].sex));
    scanf("%d", &(my_class->my_stu[my_class->count].score));
    my_class->count++;
}

void search(Class *my_class)
{
    char Name[30];
    printf("请输入要查找学员姓名:\n");
    scanf("%s", Name);
    int i = 0;
    for(i = 0; i < my_class->count; i++)
    {
        if(0 == strcmp(Name, my_class->my_stu[i].name))
        {
            printf("id:%d  ", my_class->my_stu[i].id);
            printf("name:%s  ", my_class->my_stu[i].name);
            printf("sex:%c  ", my_class->my_stu[i].sex);
            printf("score:%d\n", my_class->my_stu[i].score);
        }
    }
}

void change(Class *my_class)
{
    char Name[30];
    printf("请输入要修改学员姓名:\n");
    scanf("%s", Name);
    int i = 0;
    for(i = 0; i < my_class->count; i++)
    {
        if(0 == strcmp(Name, my_class->my_stu[i].name))
        {
            printf("请输入修改后的score:\n");
            scanf("%d", &(my_class->my_stu[i].score));
            
        }

    }
}

void dele(Class *my_class)
{
    char Name[30];
    printf("请输入要删除学员姓名:\n");
    scanf("%s", Name);
    int i = 0;
    int j = 0;
    for(i = 0; i < my_class->count; i++)
    {
        if(0 == strcmp(Name, my_class->my_stu[i].name))
        {
            for(j = i; j < my_class->count - 1; j++)
            {
            my_class->my_stu[j] = my_class->my_stu[j + 1];
            }
        }
    }
    my_class->count--;
}

void sort(Class *my_class)
{
    int i = 0;
    int j = 0;
    Student temp;
    for(i = 0; i < my_class->count - 1; i++)
    {
        for(j = 0; j < my_class->count - 1 - i; j++)
        {
            if(my_class->my_stu[j].score < my_class->my_stu[j + 1].score)
            {
                temp = my_class->my_stu[j];
                my_class->my_stu[j] = my_class->my_stu[j + 1];
                my_class->my_stu[j + 1] = temp;
            }
        }
    }
    printf("id  name  sex  score\n");
    for(i = 0; i < my_class->count; i++)
    {
            printf("id:%d  ", my_class->my_stu[i].id);
            printf("name:%s  ", my_class->my_stu[i].name);
            printf("sex:%c  ", my_class->my_stu[i].sex);
            printf("score:%d\n", my_class->my_stu[i].score);
    }
            putchar(10);
}

int main(int argc, const char *argv[])
{
    int chose = 0;
    Class my_class;
    my_class.count = 0;
    while(1)
    {
        Printf();
        scanf("%d", &chose);
        switch(chose)
        {
        case 1:
            add(&my_class);
            break;
        case 2:
            search(&my_class);
            break;
        case 3:
            change(&my_class);
            break;
        case 4:
            dele(&my_class);
            break;
        case 5:
            sort(&my_class);
            break;
        case 6:
            exit (0);
        default :
            printf("您输入有误!\n");
            break;
        }

    }

    return 0;
}

