#include "stdio.h"

int main()
{
    puts("请输入一个年份：");
    int year = 0;
    scanf("%d",&year);
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
    {
        printf("这个年份是闰年\n");
    }
    else
    {
        printf("这个年份是平年\n");
    }

    return 0;
}
