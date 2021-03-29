#include <stdio.h>
#include <string.h>

int main()
{
    char s1[32] = "hello";
    char s2[32] = "welcome";
    int i = 0;
    int n = strlen(s1);
#if 0
    while(s2[i])
    {
        s1[n] = s2[i];
        n++;
        i++;
    }
#endif

    for(i = 0; s1[i] != '\0'; i++,n++)
    {
        s1[n] = s2[i];
    }
    s2[i] = '\0';
    printf("%s\n",s1);

    return 0;
}
