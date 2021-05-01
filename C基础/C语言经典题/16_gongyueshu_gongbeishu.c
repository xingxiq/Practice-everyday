#include <stdio.h>
#include <string.h>

int main()
{
    int m = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int temp = 0;
    int a[100] = {0};
    int r[100] = {0};
    printf("请输入两个正整数：");
    scanf("%d %d", &m, &n);
    for(i = 1; i <= m; i++)
    {
        if(m % i == 0)
        {
            a[k++] = i;
        }
    }
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            r[l++] = i;
        }
    }
    for(i = k - 1; i >= 0 ; i--)
    {
        for(j = l - 1; j >= 0; j--)
        {
            if(a[i] == r[j])
            {
                temp = a[i];
                break;
            }
        }
        if(temp != 0)
        {
            break;
        }
    }
    printf("最大公约数：%d\n", temp);
    temp = m * n / temp;
    printf("最小公倍数：%d\n",temp);

    return 0;
}
