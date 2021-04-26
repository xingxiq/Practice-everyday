#include "mymath.h"

int main()
{
    int m = 100;
    int n = 4;
    printf("%d + %d = %d\n",m,n,myadd(m,n));
    printf("%d - %d = %d\n",m,n,mysub(m,n));
    printf("%d * %d = %d\n",m,n,mymul(m,n));
    printf("%d / %d = %d\n",m,n,mydiv(m,n));

    return 0;
}
