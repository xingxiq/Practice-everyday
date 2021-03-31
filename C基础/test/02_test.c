//1. 请实现类似atoi函数，把字符串“123456”转换成数值123456 ，
//并返回数值函数名： int  myatoi(char *str);

#include <stdio.h>

int  myatoi(char *str);

int main(int argc, const char *argv[])
{
    char arr[] = "123456";
    int num = 0;
    num = myatoi(arr);
    printf("%d\n",num);

    return 0;
}

int  myatoi(char *str)
{
    int num = 0;
    while(*str)
    {
        num = num*10 + (*str-'0');
        str++;
    }
    return num;
}
