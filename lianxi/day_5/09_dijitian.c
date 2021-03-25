#include "stdio.h"

int main()
{
    int year = 0;
    int mon = 0;
    int day = 0;
    int temp_day = 0;
    int num_day = 0;
    printf("请输入年月日：");
    scanf("%4d %2d %2d",&year,&mon,&day);
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
    {
        temp_day=29;
    }
    else
    {
        temp_day=28;
    }

    if(mon < 1 || mon >12)
    {
        printf("您输入的月有误！\n");
        return -1;
    }
    switch(mon)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(day <1 ||day > 31)
        {
            printf("您输入的日有误！\n");
            return -1;
        }break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(day <1 ||day > 30)
        {
            printf("您输入的日数有误！\n");
            return -1;
        }break;
    }
    if((mon == 2) && (day > temp_day || day < 1))
    {
        printf("您输入的日数有误！\n");
        return -1;
    }

    switch(mon)
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
    printf("%d年%d月%d日是%d年的第%d天\n",year,mon,day,year,num_day);

    return 0;
}
