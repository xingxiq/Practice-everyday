#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int n = 0;
    int j = 0;
    long arr[101] = {0};
    puts("题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。\
         例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。");
    printf("请输入a的值：");
    scanf("%d", &a);
    printf("请输入相加个数：");
    scanf("%d", &n);
    printf("s = %d", a);
    arr[0] = a;
    for(j = 1; j < n; j++)
    {
        arr[j] = arr[j - 1] + a*pow(10, j);
        printf("+%ld",arr[j]);
    }
    for(j = 0; j < n; j++)
    {
        arr[n] += arr[j];
    }
    printf(" =%ld\n", arr[n]);

    return 0;
}
