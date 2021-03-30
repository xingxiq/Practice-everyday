#include <stdio.h>

int main()
{
    char s1[] = "hello world";
    printf("s1 = %s\n", s1);
    s1[2] = '9';
    printf("s1 = %s\n", s1);
    char ss1[] = "hello world";
    printf("s1 = %p,ss1 = %p\n",s1, ss1);
    char *s2 = "hello world";
    printf("s2 = %s\n", s2);
    char *s3 = "hello world";
    printf("s2 = %p, s3 = %p\n", s2, s3);

    return 0;
}
