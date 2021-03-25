#include "stdio.h"


int main()
{
    unsigned char a = 35;
    unsigned char b = 40;
    printf("a = %d b = %d\n",a,b);
    char c;
    c = a & b;
    printf("a & b = %#x\n",c);
    c = a | b;
    printf("a | b = %#x\n",c);
    c = ~a;
    printf("~a = %#x\n",c);
    c = ~b;
    printf("~b = %#x\n",c);
    c = a ^ b;
    printf("a ^ b = %#x\n",c);
    c = a << 2;
    printf("a << 2 = %#x\n",c);
    c = a >> 2;
    printf("a >> 2 = %#x\n",c);
    c = b << 2;
    printf("b << 2 = %#x\n",c);
    c =b >> 2;
    printf("b >> 2 = %#x\n",c);

    return 0;
}
