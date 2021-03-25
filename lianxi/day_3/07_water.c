#include "stdio.h"
#define MS 3.0e-23
#define MK 950

int main()
{
    int n;
    double num;
    printf("请输入水的夸脱数:");
    scanf("%d",&n);
    num = MK / MS * n;
    printf("%d 夸脱水中包含 %e 个水分子\n",n,num);
    return 0;
}
