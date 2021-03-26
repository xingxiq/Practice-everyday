#include <stdio.h>
#include <string.h>

int main()
{
    char s[32] = {0};
    strcpy(s, "hello world");
    printf("%s\n",s);

    char s1[32] = "hello";
    char s2[32] = "abcdefhijk";
    printf("before：s1 = %s\n",s1);
    strcpy(s1,s2);
    printf("after：s1 = %s\n",s1);

    int i;
    for(i = 0; i < 32; i++)
    {
        printf("[%c]%d\n",s1[i],s1[i]);
    }

    return 0;
}
