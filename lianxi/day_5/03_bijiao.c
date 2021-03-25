
#include "stdio.h"
int main()
{
    int k = 0;
    int i = 0;
    int j = 0;
    int x = 0;
    int temp_s = 0;
    int s[4]={0};
    printf("请输入三个数：\n");
    while(k<3)
    {
        scanf("%d",&s[k++]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2-i;j++)
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
