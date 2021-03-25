#include <stdio.h>

int main()
{
    int score = 0;
    printf("请输入一个学生的成绩(0-100)：");
    while(1)
    {
        scanf("%d",&score);
        if(score < 0 || score > 100)
        {
            printf("请重新输入学员成绩(0-100)：");
        }
        else
        {
            break;
        }
    }
    switch(score/10)
    {
    case 10:
    case 9:printf("该学员成绩为A\n");break;
    case 8:printf("该学员成绩为B\n");break;
    case 7:
    case 6:printf("该学员成绩为C\n");break;
    default :printf("该学员成绩为D\n");break;
    }

    return 0;
}
