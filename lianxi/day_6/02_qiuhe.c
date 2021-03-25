#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while(i <= 100)
    {
        sum += i;
        i++;
    }
    printf("1~100的和为%d\n", sum);

    return 0;
}
