#include <stdio.h>

int arrsun(int *p, int len)
{
    int num = 0;
    int i = 0;
    for(i = 0; i < len; i++)
    {
    num += *p;
    p++;
    }
    return num;
}

int main(int argc, const char *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int len =sizeof(a) / sizeof(int);
    int num = arrsun(a, len);
    printf("%d\n", num);

    return 0;
}

