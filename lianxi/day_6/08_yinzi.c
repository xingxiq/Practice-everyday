#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    printf("请输入一个数：");
    scanf("%d",&n);
    printf("这个数的所有因子为：\n");
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ",i);
        }
    }
    putchar(10);

    return 0;
}
