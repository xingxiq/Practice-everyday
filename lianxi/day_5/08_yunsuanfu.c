#include "stdio.h"

int main()
{
    float x = 0;
    float y = 0;
    char n = 0;
    printf("请输入两个数：");
    scanf("%f %f",&x,&y);
    getchar();
    printf("请输入运算符(+ - * /)：");
    scanf("%c",&n);
    switch(n)
    {
        case '+':printf("%.2f + %.2f = %.2f\n",x,y,x+y);break;
        case '-':printf("%.2f - %.2f = %.2f\n",x,y,x-y);break;
        case '*':printf("%.2f * %.2f = %.2f\n",x,y,x*y);break;
        case '/':printf("%.2f / %.2f = %.2f\n",x,y,x/y);break;
    }

    return 0;
}
