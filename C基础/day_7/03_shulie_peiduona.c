#include <stdio.h>

#define N 10

int main()
{
    int i = 0;
    long arr[N] = {1, 1};
    puts("题目：输出十个斐波那契数列，1 1 2 3 5 8…,使用数组实现，打印前十个数。");
    for(i = 2; i < N; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for(i = 0; i < N; i++)
    {
        printf("%ld ",arr[i]);
    }
    putchar(10);

    return 0;
}
