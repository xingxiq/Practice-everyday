//题目：输入三个整数x,y,z，请把这三个数由小到大输出。

#include "stdio.h"
#define M 3

int main()
{
    puts("题目：\
输入三个整数x,y,z，请把这三个数由小到大输出。");
    int k = 0;
    int i = 0;
    int j = 0;
    int x = 0;
    int temp_s = 0;
    int s[M+1]={0};
    printf("请输入三个数：\n");
    while(k<3)
    {
        scanf("%d",&s[k++]);
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<M-1-i;j++)
        {
            if(s[j] > s[j+1])
            {
                temp_s = s[j];
                s[j] = s[j+1];
                s[j+1] = temp_s;
            }
        }
    }
    printf("从小到大排列后为：");
    while(s[x] != 0)
    {
        printf("%d ",s[x++]);
    }
    puts("");
    
    return 0;
}
