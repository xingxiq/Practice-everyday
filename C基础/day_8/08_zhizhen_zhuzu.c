#include <stdio.h>

int main()
{
    int a[6] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("%d\n", a[2]);//p == a
    printf("%d\n", *(a + 2));
    printf("%d\n", p[2]);
    printf("%d\n", *(p + 2));

    return 0;
}
