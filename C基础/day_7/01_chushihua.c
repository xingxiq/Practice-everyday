#include <stdio.h>

#define N 5

int main()
{
    int i = 0;
    //int a[N] = {10, 20, 30, 40, 50};
    //int a[N] = {0};
    int a[] = {10, 20, 30, 40, 50};
    for(i = 0; i < sizeof(a) / sizeof(int); i++)
    {
    printf("%d ",a[i]);
    }
    putchar(10);
    a[9] = 100;
    printf("%d ",a[9]);
    printf("%d ",a[5]);
    putchar(10);

    return 0;
}
