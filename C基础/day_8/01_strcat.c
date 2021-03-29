#include <stdio.h>
#include <string.h>

int main()
{
    char s1[32] = "hello world";
    char s2[32] = "welcome";
    strcat(s1,s2);
    printf("s1 = %s\n",s1);

    return 0;
}
