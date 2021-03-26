#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[] = {8, 4, 2, 7, 9, 2, 92, 74, 9, \
        57, 4, 20, 47,27, 42, 8, 49,2,6};
    int len = sizeof(arr) / sizeof(int);

    for(j = 0; j < len - 1; j++)
    {
        for(i = 0; i < len - 1 - j; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
            }
        }
    }
    for(i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    putchar(10);

    return 0;
}
