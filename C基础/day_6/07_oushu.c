#include <stdio.h>

int main()
{
    int i = 0;
    printf("输出0~100所有的偶数为：\n");
    for(i = 0; i <= 100; i += 2)
    {
        printf("%-3d",i);
    }
    putchar(10);

    return 0;
}
