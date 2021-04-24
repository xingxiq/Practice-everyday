#include <stdio.h>

int main(int argc, const char *argv[])
{
    FILE *fp;
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        perror("fp fopen error");
        return -1;
    }
    char buf[100];
    int count = 0;
    while(fgets(buf,99,fp) !=NULL)
    {
        count++;
    }
    printf("%d\n", count);

    return 0;
}

