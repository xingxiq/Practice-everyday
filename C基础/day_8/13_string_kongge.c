#include <stdio.h>

int main()
{
    char s[] = "hief ef uef uhfw fhu hw vv db";
    char *p = s;
    int n = 0;
    while(*p)
    {
        if(*p == ' ')
        {
            n++;
        }
        p++;
    }
    printf("%d\n", n);

    return 0;
}
