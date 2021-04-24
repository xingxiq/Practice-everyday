#include <stdio.h>

#define N 32
typedef struct
{
    int a;
    char b;
    char c[32];
    float d;
}MSG;


int main(int argc, const char *argv[])
{
    char filename[N] = {0};
    printf("请输入文件名:");
    scanf("%s", filename);

    FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("fp fopen error");
        return -1;
    }

    MSG msg = {100, 'w', "hello world", 3.14};
    fwrite(&msg, sizeof(msg), 1, fp);
    fclose(fp);
    

    return 0;
}

