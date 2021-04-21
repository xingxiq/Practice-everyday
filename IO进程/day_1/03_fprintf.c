#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    fprintf(stdout, "hello world\n");
    int age = 30;
    fprintf(stdout, "My age is %d\n", age);

    FILE *fp;
    fp = fopen("test.txt", "a");
    if(fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    fprintf(fp, "hello world\n");
    fprintf(fp, "My age is %d\n", age);

    printf("*****************************\n");

    char buf1[32] = "hello world";
    char buf2[32] = {0};
    char buf3[32] = {0};
    int age1 = 30;
    strcpy(buf2, buf1);
    strcat(buf2,",My age is age1");
    printf("buf2 = %s\n", buf2);

    sprintf(buf3, "%s,My age is %d", buf1, age1);
    printf("buf3 = %s\n", buf3);

    char s1[32] = "789";
    int num1;
    num1 = atoi(s1);
    printf("num1 = %d\n", num1);

    char s2[32];
    int num2 = 678;
    sprintf(s2, "%d", num2);
    printf("s2 = %s\n", s2);

    return 0;
}

