#include <stdio.h>

int main()
{
    char a[32] = "hello world";
    char *p = a;
    int len = 0;
    while(*p)
    {
        p++;
        len++;
    }
    printf("%d\n", len);

    return 0;
}
