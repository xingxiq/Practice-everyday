#include <stdio.h>

int main()
{
#if 1
    int i,j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        for(j = 0; j < 2*i +1;j++)
        {
            printf("*");
        }
        putchar(10);
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        for(j = 0; j < 5 - 2*i;j++)
        {
            printf("*");
        }
        putchar(10);
    }
#endif
#if 0
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=2*i;k++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=i;j++)
            printf(" ");
        for(k=0;k<=4-2*i;k++)
            printf("*");
        printf("\n");
    }
#endif


    return 0;
}
