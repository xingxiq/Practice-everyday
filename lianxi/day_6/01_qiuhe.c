#include "stdio.h"

int main()
{
    int i = 1;
    int sum = 0;
    int n = 0;
    printf("请输入1~?的和：");
    scanf("%d",&n);
NEXT:
    printf("%d",i);
    sum += i;
    i++;

    if(i <= n)
    {
        printf("+");
        goto NEXT;
    }
    printf("=%d\n",sum);
    printf("1~%d的和为：%d\n",n,sum);

    return 0;
}
