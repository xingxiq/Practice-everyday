#include <stdio.h>
#include <stdbool.h>

int main()
{
    _Bool a = 1;
    printf("a = %d\n",a);
    _Bool b = 0;
    printf("b = %d\n",b);
    _Bool c = 128;
    printf("c = %d\n",c);
    _Bool d = -0.0000005;
    printf("d = %d\n",d);
    bool e = 1;
    printf("e = %d\n",e);
    return 0;
}
