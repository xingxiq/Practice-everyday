#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char buf[32] = {0};
    fgets(buf, 5, stdin);
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    printf("buf = %s\n", buf);

    FILE *fp;
    if((fp = fopen("test.txt", "r")) == NULL)
    {
        perror("fopen error");
        return -1;
    }

    //char buf[32] = {0};
    //fgets(buf, 32, fp);
    //printf("buf = %s\n", buf);

    //char buf[32] = {0};
    while(fgets(buf, 32, fp) != NULL)
    {
        printf("buf = %s\n", buf);
    }

    return 0;
}

