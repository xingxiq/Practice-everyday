#include <stdio.h>

int main()
{
    int i = 0;
    int k = 0;
    int num = 0;
    int a[50] = {0};
    printf("请输入一个正整数：");
    scanf("%d",&num);
    int n = num;
    for(i = 2; i < num;)
    {
        if(n % i ==0)
        {
            n /= i;
            a[k++] = i;
        }
        else
        {
            i++;
        }
        if(n == 1)
        {
            break;
        }
    }
    printf("%d这个数分解质因数后：%d=%d",num,num,a[0]);
    for(i = 1; i < k; i++)
    {
        printf("*%d",a[i]);
    }
    putchar(10);

    return 0;
}
