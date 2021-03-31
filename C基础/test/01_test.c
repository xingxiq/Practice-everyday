//编写函数，实现strcat函数的功能（strcat函数功能为实现字符串的追加）
//函数名：void mystrcat(char *s1, char *s2)

#include <stdio.h>
#include <string.h>

void mystrcat(char *s1, char *s2);

int main(int argc, const char *argv[])
{
    char s1[32] = "hello world";
    char s2[32] = "welcome to beijing";
    printf("before：s1 = %s\n",s1);
    printf("before：s2 = %s\n",s2);
    mystrcat(s1, s2);
    printf("after：s1 = %s\n",s1);

    return 0;
}

void mystrcat(char *s1, char *s2)
{
    int len = strlen(s1);
    s1 += len;
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    
}
