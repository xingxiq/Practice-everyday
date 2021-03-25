#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int sum = 0;
    printf("1000以内的所有完数为：\n");
    for(i = 1; i <= 1000; i++)
    {
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(i == sum)
        {
            printf("%d ",i);
        }
        sum = 0;
    }
    putchar(10);

    return 0;
}
