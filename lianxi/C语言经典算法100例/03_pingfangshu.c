//题目：一个整数，它加上100后是一个完全平方数，
//再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>
#include <math.h>


int main()
{
    puts("题目：\
一个整数，它加上100后是一个完全平方数，\
再加上168又是一个完全平方数，请问该数是多少？");
    long x = 0;
    long y = 0;
    int i = 0;
    do
    {
        x = sqrt(i+100);
        y = sqrt(i+268);
        if((x*x == i+100) && (y*y == i+268))
        {
            printf("该数是：%d\n",i);
        }
        i++;
    }
    while(i < 100000);

    return 0;
}
