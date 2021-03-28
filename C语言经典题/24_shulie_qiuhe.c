#include <stdio.h>

int main()
{
    puts("题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。");
    float a = 2;
    float b = 1;
    float temp = 0;
    int i = 0;
    float sum = 0;
    for(i = 1; i <= 20; i++)
    {
        sum += a / b;
        temp = a + b;
        b = a ;
        a = temp;
    }
    printf("数列的前20项之和：%f\n",sum);

    return 0;
}
