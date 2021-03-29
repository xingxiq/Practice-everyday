#include <stdio.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50};
    int *p = &a[0];
    printf("p = %p\n", p);
    printf("p + 3 = %p\n",p + 3);
    printf("*p = %d, *(p + 3) = %d\n", *p, *(p + 3));

    int *q = p + 3;
    printf("*q = %d\n",*q);

    int b = *p++;
    printf("b = %d,*p = %d\n", b, *p);
    int c = *++p;
    printf("c = %d, *p = %d\n",c,*p);
    return 0;
}
