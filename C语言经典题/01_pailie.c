//题目：有1、2、3、4个数字，
//能组成多少个互不相同且无重
//复数字的三位数？都是多少？

#include "stdio.h"

int main()
{
    puts("//题目：\
有1、2、3、4个数字，能组成多少个互不相同且无重\
复数字的三位数？都是多少？");
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 0;
    printf("不相同的三位数分别是:\n");
    for (i=1; i<5; i++)
    {
        for (j=1; j<5; j++)
        {
            if (i == j)
            {
                continue;
            }
            for (k=1; k<5; k++)
            {
                if ((i == k) || (j == k))
                {
                    continue;
                }
                printf("%d%d%d\n",i,j,k);
                n++;
            }
        }
    }
    printf("总个数为:%d\n",n);

    return 0;
}
