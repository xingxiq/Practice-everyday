#include <stdio.h>

int main()
{
    char s1[32] = "hello world";
    char s2[32] = "welcome";
    char *p = s1;
    char *q = s2;
    while(*q)
    {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';
    printf("s1 = %s\n", s1);
}
