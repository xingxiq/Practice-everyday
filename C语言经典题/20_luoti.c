#include <stdio.h>

int main()
{
    puts("题目：一球从100米高度自由落下，\
每次落地后反跳回原高度的一半；再落下，求它在 \
第10次落地时，共经过多少米？第10次反弹多高？");
    float h = 100;
    int t = 10;
    float sum = 0;
    int i = 0;
    for(i = 1; i <= t; i++)
    {
        sum += (h + h/2);
        h /= 2;
    }
    printf("共经过%f米。\n第10次反弹%f米。\n",sum,h);

    return 0;
}
