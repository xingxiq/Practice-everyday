#include "stdio.h"

int main()
{
#if 1
    int a = 10,b = 50,c;
    c = a;
    a = b;
    b = c;
#endif
#if 0
    int a = 10,b = 50;
    a = a + b;
    b = a - b;
    a = a - b;
#endif
#if 0
    int a = 10,b = 50;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
#endif
    printf("a=%d b=%d\n",a,b);

    return 0;
}
