#include <stdio.h>

int main(int argc, const char *argv[])
{
    FILE *fp1, *fp2;
    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s <srcfile> <destfile>\n", argv[0]);
        return -1;
    }
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");
    if(fp1 == NULL)
    {
        perror("file1 fopen error");
    }
    if(fp2 == NULL)
    {
        perror("file2 fopen error");
    }
    int c;
    while((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp2);
    }

    printf("cp down\n");


    return 0;
}

