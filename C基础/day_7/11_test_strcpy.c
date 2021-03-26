#include <stdio.h>

int main()
{
    int i = 0;
    char s1[32] = "hello world";
    char s2[32] = "abcdefg";
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    printf("s1 = %s\n",s1);

    return 0;
}
