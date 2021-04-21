#include <stdio.h>

int main(int argc, const char *argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "Usage: %s <destfile>\n", argv[0]);
    }
    FILE *fp;
    if((fp = fopen(argv[1],"w+")) == NULL)
    {
        perror("fp_1 fopen error");
        return -1;
    }
    if(fputs("123456789", fp) == EOF)
    {
        perror("fputs error");
        return -1;
    }
    if(fseek(fp, 4, SEEK_SET) == -1)
    {
        perror("fseek error");
        return -1;
    }
    char buf[32] = {0};
    if(fgets(buf,6,fp) == NULL)
    {
        perror("fgets error");
        return -1;
    }
    printf("buf = %s\n", buf);


    return 0;
}

