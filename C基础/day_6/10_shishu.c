#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int sum = 0;
    printf("1000以内的所有质数：\n");
    for(i = 2; i <= 1000; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                sum++;
            }
        }
        if(sum == 2)
        {
            printf("%-4d",i);
        }
        sum = 0;
    }
    putchar(10);

    return 0;
}
