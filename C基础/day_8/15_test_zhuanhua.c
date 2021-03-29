#include <stdio.h>
#include <math.h>

int main()
{
    char s[32] = {0};
    int a[32] = {0};
    char *p = s;
    int *q = a;
    int i = 0;
    int n = 0;
    int num = 0;

    printf("请输入一串数字型字符：");
    scanf("%s", s);
    while(*p != '\0')
    {
        *q = *p - '0';
        p++;
        q++;
        n++;
    }
    q--;
    for(i = 0; i < n; i++)
    {
        num += (*q * pow(10, i));
        q--;
    }
    printf("num = %d\n", num);

    return 0;
}
