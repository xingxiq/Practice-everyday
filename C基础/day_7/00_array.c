#include <stdio.h>

int main()
{
#if 1
    int a[5];
    int i = 0;
    for(i = 0; i < (int) (sizeof(a) / sizeof(a[0])); i++)
    {
        printf("%p\n",&a[i]);
    }
    printf("%ld\n",sizeof(a));
    printf("%ld\n",sizeof(a[0]));
#endif

#if 0
    int a[5];
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);
#endif

    return 0;;
}
