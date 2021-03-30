#include <stdio.h>

//编写四个函数，分别实现加
//减乘除的功能，分别传入两个值，返回加减乘除的结果

int myadd(int a, int b);
int mysub(int a, int b);
int mymul(int a, int b);
float mydiv(int a, int b);
int main(int argc, const char *argv[])
{
    printf("5 + 2 = %d\n", myadd(5, 2));
    printf("5 - 2 = %d\n", mysub(5, 2));
    printf("5 * 2 = %d\n", mymul(5, 2));
    printf("5 / 2 = %.2f\n", mydiv(5, 2));

    return 0;
}

int myadd(int a, int b)
{
    int sum = a + b;

    return sum;
}

int mysub(int a, int b)
{
    return a - b; //返回值也可以是一个表达式
}

int mymul(int a, int b)
{
    return a * b;
}

float mydiv(int a, int b)
{
    float n = (float)a / (float)b;
    return n;
}
