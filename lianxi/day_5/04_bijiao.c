#include "stdio.h"

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int temp = 0;
    printf("请输入三个数：");
    scanf("%d %d %d",&x,&y,&z);
    while(1)
    {
        if(x < y)
        {
            if(x < z)
            {
                if(y < z)
                {            
                    printf("从小到达排序为：%d %d %d\n",x,y,z);
                    break;
                }
                else
                {
                    temp = y;
                    y = z;
                    z = temp;
                }
            }
            else
            {
                temp = x;
                x = z;
                z = temp;
            }
        }
        else
        {
            temp = x;
            x = y;
            y = temp;
        }
    }

    return 0;
}
