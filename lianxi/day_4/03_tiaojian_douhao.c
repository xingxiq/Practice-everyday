#include "stdio.h"

int main()
{
    int a = 10;
    int b = 20;
    int c;
    int d;
    c = a > b ? a++ : b++;
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    d = (a++, b++, b+=a);
    printf("a = %d,b = %d,d = %d\n",a,b,d);

    return 0;
}
