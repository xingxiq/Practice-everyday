#include <stdio.h>

int main(int argc, const char *argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "Usage %s <destfile>", argv[1]);
    }
    FILE *fp;
    if((fp = fopen(argv[1], "a+")) == NULL)
    {
        perror("fp fopen error");
        return -1;
    }

    printf("offset = %ld\n", ftell(fp));
    fseek(fp, 3, SEEK_SET);
    printf("offset = %ld\n", ftell(fp));

    fputs("abc", fp);

    return 0;
}

