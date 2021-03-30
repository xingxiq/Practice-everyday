#include <stdio.h>

void maopao(int len, int *arr)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, const char *argv[])
{
    int i = 0;
    int arr[] = {8,7,3,9,1,3,9,1};
    int len = sizeof(arr) / sizeof(int);
    for(i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    putchar(10);
    maopao(len, arr);
    for(i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    putchar(10);

    return 0;
}

