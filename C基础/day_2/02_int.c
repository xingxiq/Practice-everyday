#include "stdio.h"

int main()
{   int a=35;
    int b=0x35;
    int c=0b100111;
    printf("a=%d\n",a);
    printf("a=%#o\n",a);
    printf("a=%#x\n",a);
    printf("b=%d %#o %#x\n",b,b,b);
    printf("c=%d %#o %#x\n",c,c,c);
    return 0;
}
