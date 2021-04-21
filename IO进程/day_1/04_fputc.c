#include <stdio.h>

int main(int argc, const char *argv[])
{
    fputc('w', stdout);
    fputc(97, stdout);

    int a = 100;
    fputc(a, stdout);

    FILE *fp = fopen("test.txt", "r+");
    if(fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    if(fputc('h', fp) == EOF)
    {
        perror("fputc error");
        return -1;
    }
    if(fputc('e',fp) == EOF)
    {
        perror("fputc perror");
        return -1;
    }

    fclose(fp);

    return 0;
}

