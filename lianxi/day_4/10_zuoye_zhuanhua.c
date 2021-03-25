#include <stdio.h>

int main()
{
    char c;
    while(1)
    {
        printf("请输入一个字符：\n");
        scanf("%c",&c);
        if(c >= 'a' && c <= 'z')
        {
            printf("转化后为：%c\n",c-('a'-'A'));
        }
        else if(c >= 'A' && c <= 'Z')
        {
            printf("转化后为：%c\n",c+('a'-'A'));
        }
        else if(c >= '0' && c <= '9')
        {
            printf("转化后为：%d\n",c-'0');
        }
        else
        {
            printf("输入有误！");
        }
        getchar();
    }

    return 0;
}
