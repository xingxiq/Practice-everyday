#include <stdio.h>

int hstr(char *arr);

int main(int argc, const char *argv[])
{
    char arr[100] = {0};
    int num = 0;
    printf("请输入一串字符串：");
    scanf("%s", arr);
    num = hstr(arr);
    printf("该字符串有%d个字符。\n", num);

    return 0;
}


int hstr(char *arr)
{
    int n = 0;
    while(*arr)
    {
        n++;
        arr++;
    }
    return n;
}
