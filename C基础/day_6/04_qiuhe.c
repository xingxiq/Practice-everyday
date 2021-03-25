#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    for(i = 1; i <= 1000; i++)
    {
        sum += i;
    }
    printf("1~1000的和为%d\n",sum);

    return 0;
}
