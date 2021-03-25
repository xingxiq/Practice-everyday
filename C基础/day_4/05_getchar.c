#include <stdio.h>

int main()
{
#if 0
    char ch = getchar();
    putchar(ch);
    putchar(10);
#endif

    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();

    printf("a = [%c]%d, b = [%c]%d, c = [%c]%d\n",a,a,b,b,c,c);

    return 0;
}
