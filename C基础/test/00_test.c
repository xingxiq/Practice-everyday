//编写函数实现冒泡排序（要求：从终端获取十个数，升序排序)
//函数名：void  myBubbling(int *a, int len)  
//a为数组名，len表示数组元素的个数

#include <stdio.h>

void  myBubbling(int *a, int len);

int main(int argc, const char *argv[])
{
    int arr[10] = {0};
    int i = 0;
    printf("请输入十个数：");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    myBubbling(arr, 10);
    for(i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    putchar(10);

    return 0;
}

void  myBubbling(int *a, int len)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < len - 1; i++)
    {
        for(j = 0; j < len -1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
