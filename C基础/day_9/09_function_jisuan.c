#include <stdio.h>

int jia(int m, int j);
int jian(int m, int j);
int cheng(int m, int j);
float chu(int m, int j);

int main(int argc, const char *argv[])
{
    int a = 0;
    int b = 0;
    printf("请输入a和b的值：");
    scanf("%d %d",&a, &b);
    printf("请选择功能(+ - * /)：");
    char ch = 0;
    getchar();
    scanf("%c",&ch);
    if(ch == '+')
    {
        printf("%d %c %d = %d\n",a,ch,b,jia(a, b));
    }
    else if(ch == '-')
    {
        printf("%d %c %d = %d\n",a,ch,b,jian(a, b));
    }
    else if(ch == '*')
    {
        printf("%d %c %d = %d\n",a,ch,b,cheng(a, b));
    }
    else
    {
        printf("%d %c %d = %f\n",a,ch,b,chu(a, b));
    }


    return 0;
}


int jia(int m, int j)
{
    return m + j;
}
int jian(int m, int j)
{
    return m - j;
}
int cheng(int m, int j)
{
    return m * j;
}
float chu(int m, int j)
{
    return (float)m / (float)j;
}

