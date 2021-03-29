#include <stdio.h>

int main()
{
    int a = 20;
    int *p = &a;
    printf("&a = %p\np = %p\n&p = %p\n",&a,p,&p);

    return 0;
}
