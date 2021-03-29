#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "abcdefg";
    int i = 0;
#if 0
    int len = strlen(s);
    for(i = 0; i < len / 2; i++)
    {
        s[i] = s[i] + s[len - i - 1];
        s[len - i - 1] = s[i] - s[len - i -1];
        s[i] = s[i] - s[len - i -1];
    }
#endif

#if 1
    char *p = s;
    char *q = s;
    char ch;
    while(*q)
    {
        q++;
    }
    q--;
    while(q > p)
    {
        ch = *p;
        *p = *q;
        *q = ch;
        p++;
        q--;
    }

#endif
    printf("s = %s\n", s);

    return 0;
}
