#include <stdio.h>

int main()
{
    int score = 0;
    printf("请输入一个学生成绩：");
    while(1)
    {
        scanf("%d",&score);
        if(score < 0 || score >100)
        {
            printf("您输入的成绩有误，请重新输入该学生成绩：");
        }
        else
        {
            break;
        }
    }
    if(score >= 90)
    {
        printf("该学生的成绩为：A\n");
    }
    else if(score >= 80)
    {
        printf("该学生的成绩为：B\n");
    }
    else if(score >= 60)
    {
        printf("该学生的成绩为：C\n");
    }
    else
    {
        printf("该学生的成绩为：D\n");
    }

    return 0;
}
