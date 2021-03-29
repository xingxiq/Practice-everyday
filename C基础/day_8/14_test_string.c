#include <stdio.h>

int main()
{
    char s[32];
    char *p = s;
    int n = 0;
    printf("请输入一个字符串：");
    scanf("%s", s);
    while(*p != '\0')
    {
        if(*p >= 'A' && *p <= 'Z')
        {
            printf("%c", *p + ('a' - 'A'));
        }
        else if(*p >= 'a' && *p <= 'z')
        {
            printf("%c", *p - ('a' - 'A'));
        }
        else if(*p >= '0' && *p <= '9')
        {
            n++;
            printf("%c", *p);
        }
        else
        {
            printf("-");
        }
        p++;
    }
    printf("，有%d个数字\n", n);

    return 0;
}
