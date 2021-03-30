#include <stdio.h>

int main(int argc, const char *argv[])
{
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int (*p)[4] = arr;
    int i = 0;
    int j = 0;
    int len = sizeof(arr) / sizeof(int);
    for(i = 0; i < len / 4; i++)
    {
        for(j = 0; j < len / 4; j++)
        {
            printf("%d ",p[i][j]);
        }
    }

    return 0;
}

