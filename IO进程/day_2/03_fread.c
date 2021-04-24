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
    if((fp = fopen(filename, "r")) == NULL)
    {
        perror("fp fopen error");
        return -1;
    }

    MSG msg;
    fread(&msg, sizeof(msg), 1, fp);
    printf("%d-%c-%s-%.2f\n", msg.a,msg.b,msg.c,msg.d);
    fclose(fp);
    

    return 0;
}

