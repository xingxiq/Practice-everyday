//题目：输入某年某月某日，判断这一天是这一年的第几天？

#include "stdio.h"

int main()
{
    puts("题目：\
输入某年某月某日，判断这一天是这一年的第几天？");
    int year = 0;
    int mou = 0;
    int day = 0;
    int temp_day = 0;
    int num_day = 0;
    printf("请输入年月日：\n");
    scanf("%4d %2d %2d",&year,&mou,&day);
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
    {
        temp_day=29;
        if(mou == 2 && day > temp_day)
        {
            printf("您输入的月份有误！");
        }
    }
    else
    {
        temp_day=28;
        if(mou == 2 && day > temp_day)
        {
            printf("您输入的月份有误！");
        }
    }
    
    switch(mou)
    {
        case 1:num_day = day;break;
        case 2:num_day = 31*1 + day;break;
        case 3:num_day = 31*1 + temp_day + day;break;
        case 4:num_day = 31*2 + temp_day + day;break;
        case 5:num_day = 31*2 + 30*1 + temp_day + day;break;
        case 6:num_day = 31*3 + 30*1 + temp_day + day;break;
        case 7:num_day = 31*3 + 30*2 + temp_day + day;break;
        case 8:num_day = 31*4 + 30*2 + temp_day + day;break;
        case 9:num_day = 31*5 + 30*2 + temp_day + day;break;
        case 10:num_day = 31*5 + 30*3 + temp_day + day;break;
        case 11:num_day = 31*6 + 30*3 + temp_day + day;break;
        case 12:num_day = 31*6 + 30*4 + temp_day + day;break;
    }
    printf("这一天是这一年的第 %d 天\n",num_day);

    return 0;
}
