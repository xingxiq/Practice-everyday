#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    **q = 888;
    printf("a = %d %d %d\n",a, *p, **q);
    printf("p = %p %p %p\n",&a, p, *q);
    printf("&p = %p %p\n", &p, q);

    return 0;
}

