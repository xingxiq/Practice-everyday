#include <stdio.h>

int main(int argc, const char *argv[])
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    printf("%p\n",*arr);
    printf("%p\n",*(arr + 1));
    int len = sizeof(arr);
    printf("%d\n",len);
    len = sizeof(arr[0]);
    printf("%d\n",len);
    len = sizeof(arr[0][0]);
    printf("%d\n",len);

    return 0;
}

