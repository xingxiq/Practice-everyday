#include <stdio.h>

int main()
{
    int a = 999;
    int *p1 = &a;
    *p1 = 0x12345678;
    char *p2 = (char *)&a;
    printf("*p2 = %#x\n",*p2);
    printf("*(p2 +1) = %#x\n",*(p2 + 1));
    p2 = p2 + 3;
    printf("*p2 = %#x\n",*p2);

    return 0;
}
