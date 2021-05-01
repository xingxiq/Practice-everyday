#include <stdio.h>

int main()
{
    char s[100];
    int i = 0;
    int e = 0;
    int k = 0;
    int n = 0;
    int o = 0;
    printf("请输入一串字符：");
    scanf("%[^\n]s", s);
    while(s[i])
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            e++;
        }
        else if(s[i] == ' ')
        {
            k++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            n++;
        }
        else
        {
            o++;
        }
        i++;
    }
    printf("英文字母数：%d\n空格数：%d\n数字数：%d\n其它字符数：%d\n", e, k, n, o);

    return 0;
}
