#include <stdio.h>

int main()
{
    puts("题目：使用二维数组存储杨辉三角并输出。");
    int a[10][10] = {0};
    int i = 0;
    int j = 0;
    for(i = 0; i < 10; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for(i = 2; i < 10; i++)
    {
        for(j = 1; j < i; j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%-4d",a[i][j]);
        }
        putchar(10);
    }


    return 0;
}
