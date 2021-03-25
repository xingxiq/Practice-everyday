#include <stdio.h>

int main()
{
    int i = 0;
    int num = 0;
    int bai = 0;
    int shi = 0;
    int ge = 0;
    printf("100~1000以内的所有的水仙花数：\n");
    for(i = 100; i <= 999; i++)
    {
        bai = i / 100;
        shi = i % 100 / 10;
        ge = i % 10;
        num = bai*bai*bai + shi*shi*shi + ge*ge*ge;
        if(i == num)
        {
            printf("%d\t",i);
        }
    }
    putchar(10);

    return 0;
}
