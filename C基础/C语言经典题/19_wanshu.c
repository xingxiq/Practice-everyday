#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    int j = 0;
    printf("1000以内的完数为：\n");
    for(i = 1; i <= 1000; i++)
    {
        sum = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
            sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
    putchar(10);

    return 0;
}
