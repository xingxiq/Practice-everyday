#include <stdio.h>

int main(int argc, const char *argv[])
{
    if(fputs("hello world", stdout) == EOF)
    {
        perror("fputs error");
        return -1;
    }

    FILE *fp;
    if((fp = fopen(argv[1], "w")) == NULL)
    {
        perror("fopen error");
        return -1;
    }

    fputs("nihao beijing\n", fp);
    fputs("welcome to hqyj\n", fp);

    return 0;
}

