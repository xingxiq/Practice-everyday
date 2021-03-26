#include <stdio.h>

int main()
{
    int max = 0;
    int i = 0;
    int max_n = 0;
    int arr[] = {8, 2, 9, 7, 28, 84 ,0 , 2 ,6};
    max = arr[0];
    while(i < (int)(sizeof(arr) / sizeof(int)))
    {
        printf("%d ",arr[i++]);
    }
    putchar(10);
    for(i = 0; i < (int)(sizeof(arr) / sizeof(int)); i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            max_n = i;
        }
    }
    printf("最大值为：%d，其下标为：%d\n",max , max_n);

    return 0;
}
