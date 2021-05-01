#include <stdio.h>

int main()
{
    char s[6];
    scanf("%s",s);
    for(int i = 0; i < 5; i++)
    {
    printf("%c-%d\n",s[i],s[i]);
    }

    return 0;
}
