#include <stdio.h>

void fuzhi(char *s1, char *s2);

int main(int argc, const char *argv[])
{
    char s1[32] = "hello world";
    char s2[32] = "welcome";
    printf("before：s1 = %s\n",s1);
    fuzhi(s1, s2);
    printf("after：s1 = %s\n",s1);

    return 0;
}

void fuzhi(char *s1, char *s2)
{
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

