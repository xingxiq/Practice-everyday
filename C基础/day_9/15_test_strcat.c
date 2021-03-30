#include <stdio.h>
#include <string.h>

void pinjie(char *s1, char *s2, int len);

int main(int argc, const char *argv[])
{
    char s1[32] = "hello world";
    char s2[32] = "welcome";
    int len = strlen(s1);
    printf("before：s1 = %s\n",s1);
    pinjie(s1, s2, len);
    printf("after：s1 = %s\n",s1);

    return 0;
}

void pinjie(char *s1, char *s2, int len)
{
    s1 += len;
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}
