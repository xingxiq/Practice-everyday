#include <stdio.h>

int main()
{
    int a[3][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                 {9, 10, 11, 12}};
//    printf("*a = %p\n", *a);
//    printf("*a +1 = %p\n", *a + 1);
//    printf("**a = %d\n", **a);
//    printf("*(*a + 1) = %d\n", *(*a + 1));
//    printf("*(*(a + 1) + 1) = %d\n", *(*(a + 1) + 1));
        
    int (*p)[4] = a;
    printf("p = %p\n",p);
    printf("*p = %p\n",*p);
    printf("**p = %d\n",**p);
    printf("**(p + 1) = %d\n",**(p + 1));
    printf("*(p + 1) = %p\n",*(p + 1));

    return 0;
}
