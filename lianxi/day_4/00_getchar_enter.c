#include <stdio.h>

int main()
{

    char a = 10, b = 10, c = 10;
    while(a == 10)
    {
    a = getchar();
    }
    while(b == 10)
    {
    b = getchar();
    }
    while(c == 10)
    {
    c = getchar();
    }

    printf("a = [%c]%d, b = [%c]%d, c = [%c]%d\n",a,a,b,b,c,c);

    return 0;
}
