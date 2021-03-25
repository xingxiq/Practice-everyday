#include <stdio.h>

int main()
{
    int i = 1;
    int j = 1;
    for(i = 1; i <= 'F'-'A'+1; i++)
    {
        for(j = 1;j < i;j++)
        {
            printf("_");
        }
        for(j = 1;j <= i;j++)
        {
            printf("%c",'F'+1-j);
        }
        putchar(10);
    }

    return 0;
}
