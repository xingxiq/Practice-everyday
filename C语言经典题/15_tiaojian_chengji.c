#include <stdio.h>

int main()
{
    int score = 0;
    printf("请输入学生的成绩：");
    scanf("%d",&score);
    score >= 90 ? printf("成绩为：A\n") : score >= 60 ? printf("成绩为：B\n") : printf("成绩为：C\n");

    return 0;
}
