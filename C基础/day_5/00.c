#include "stdio.h"
#include "math.h"

int main()
{
    int num = 0;
    printf("请输入一个数：");
    scanf("%d",&num);
    int f1 = 0;
    int f2 = 1;
    int f3 = 0;
    while(1)
    {
        if(num == f2)
        {
            printf("0\n");
            break;
        }
        else if(num < f2)
        {
            if(abs(num-f2) > abs(num-f1))
            {
                printf("%d\n",abs(num-f1));
                break;
            }
            else
            {
                printf("%d\n",abs(num-f2));
                break;
            }
        }
        else
        {
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
        }
    }
    return 0;
}
