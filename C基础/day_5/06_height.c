#include "stdio.h"

int main()
{
    float faHeight = 0;
    float moHeight = 0;
    char XB = 0;
    char DL = 0;
    char XG = 0;
    float temp_height;
    float dl_height = 0;
    float xg_height = 0;
    float height = 0;
    printf("请输入父亲的身高(cm)：");
    scanf("%f",&faHeight);
    getchar();
    printf("请输入母亲的身高(cm)：");
    scanf("%f",&moHeight);
    getchar();
    printf("请输入孩子的性别(B / G)：");
    scanf("%c",&XB);
    getchar();
    printf("是否喜欢体育锻炼(Y / N)：");
    scanf("%c",&DL);
    getchar();
    printf("是否有良好的卫生习惯(Y / N)：");
    scanf("%c",&XG);
    if(XB == 'B')
    {
        temp_height = (faHeight + moHeight)*0.54;
    }
    else
    {
        temp_height = (faHeight*0.923 + moHeight)/2;
    }

    if(DL == 'Y')
    {
        dl_height = temp_height*0.02;
    }
    if(XG == 'Y')
    {
        xg_height = temp_height*0.015;        
    }
    height = temp_height + dl_height + xg_height;
    printf("预测孩子的身高为%.2fcm\n",height);


    return 0;
}
