#include <stdio.h>

int main(int argc, const char *argv[])
{
    char s1[4][32] = {"hello", "world", "nihao", "beijing"};
    printf("%s %s %s %s \n", s1[0], s1[1], s1[2], s1[3]);
    char *p[4];
    printf("sizeof(p) = %ld\n",sizeof(p));
    char str1[] = "hello";
    char str2[] = "woeld";
    char str3[] = "nihao";
    char str4[] = "beijing";
    p[0] = str1;
    p[1] = str2;
    p[2] = str3;
    p[3] = str4;
    printf("%s %s %s %s\n",p[0], p[1], p[2], p[3]);

    return 0;
}

