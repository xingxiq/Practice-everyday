#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[2][4] = {0};
    arr[0][0] = 100;
    arr[0][1] = 200;
    arr[1][3] = 300;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%-4d",arr[i][j]);
        }
        putchar(10);
    }

    return 0;
}
