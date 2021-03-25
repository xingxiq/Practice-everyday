#include "stdio.h"

int main()
{
    int num = 738;
    printf("********************\n");
    printf("%d%d\n",num,num);
    printf("********************\n");
    printf("%5d%5d\n",num,num);
    printf("********************\n");
    printf("%-5d%-5d\n",num,num);
    printf("********************\n");
    printf("%05d%05d\n",num,num);
    printf("********************\n");
    printf("%+-5d%+-5d\n",num,num);
    printf("%+d\n",-76);
    float f = 3.1415926;
    printf("f = %f\n", f);
    printf("f = %.3f\n", f);
    printf("%s\n", "hello world");
    printf("%.5s\n", "hello world");


    return 0;
}
