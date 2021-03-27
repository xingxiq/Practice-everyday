#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 0;
    int a[100] = {0};
    for(i = 101; i <= 200; i++)
    {
        n = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                n++;
            }
        }
        if(n == 2)
        {
            a[k++] = i;
        }
    }
    printf("101~200之间有%d个素数。\n",k);
    printf("素数为：");
    for(i = 0; i < k - 1; i++)
    {
        printf("%-4d",a[i]);
    }
    putchar(10);

    return 0;
}
