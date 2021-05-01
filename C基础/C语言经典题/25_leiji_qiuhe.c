#include <stdio.h>

int main()
{
#if 1
    int i = 0;
    int j = 0;
    int n = 0;
    float sum = 1;
    long temp = 1;
    printf("请输入阶乘数：\n");
    scanf("%d",&n);
    printf("1");
    for(i = 2; i <= n; i++)
    {
        temp = 1;
        printf("+%d!", i);
        for(j = 1; j <= i; j++)
        {
            temp *= j;
        }
        sum += temp;
    }
    printf("=%e\n",sum);
#endif
   
    return 0;
}
