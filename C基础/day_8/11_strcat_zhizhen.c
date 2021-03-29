#include <stdio.h>

int main()
{
    char s1[32] = "hello world";
    char s2[32] = "welcome";
    char *p = s1;
    char *q = s2;
    while(*p)
    {
        p++;
    }
    while(*q)
    {
        *p = *q;
        p++;
        q++;
    }
    printf("s1 = %s\n", s1);
}
