#include <stdio.h>

int qiuhe(int n);

int main(int argc, const char *argv[])
{
    int n = 0;
    printf("请输入n的值：");
    scanf("%d",&n);
    int sum = qiuhe(n);
    printf("1到n的和值为：%d\n",sum);

    return 0;
}

int qiuhe(int n)
{
    int sum = 0;
    int i = 0;
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

