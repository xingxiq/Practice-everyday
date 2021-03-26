#include <stdio.h>

int main()
{
#if 1
    char a[5] = {'s', 'f', 't', 'h', 'l'};
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("%c ", a[i]);
    }
    putchar(10);
    char s[] = "jfoijfoifjoiwjf";
    printf("%s\n", s);
    printf("%s\n", a);
#endif
#if 0
    //字符数组：数组里面的每一个元素都是字符
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%c ", ch[i]);
    }
    putchar(10);

    //将一个字符串保存在数组里面
    //char s[12] = {"hello world"}; //形式1
    //char s[12] = "hello world"; //形式2
    char s[] = "hello\0world"; //形式3

    printf("s = %s\n", s);

    //如果数组里面存储的不是一个字符串，不能用%s输出
    //因为%s输出是一个字符一个字符输出，直到遇到第一个\0
    printf("ch = %s\n", ch);
#endif



    return 0;
}
