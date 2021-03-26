#include <stdio.h>

int main()
{
    char s[] = "wertsdfggjyu";
    int i= 0;
    int len = 0;
    while(s[i] != '\0')
    {
        len++;
        i++;
    }
    printf("%d\n",len);

    return 0;
}
