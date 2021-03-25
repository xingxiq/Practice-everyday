#include "stdio.h"

int main()
{
    int ge,shi,bai,n;
    printf("请输入一个三位数:");
    scanf("%d",&n);
    bai = n / 100;
    shi = n % 100 / 10;
    ge = n % 10;
    printf("个位 十位 百位的和为%d\n",bai+shi+ge);

    return 0;
}
