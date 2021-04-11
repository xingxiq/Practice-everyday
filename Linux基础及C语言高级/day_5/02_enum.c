#include <stdio.h>

enum Color
{
    green,
    red,
    yellow = 10,
    blue,
    pink,
    black
};

int main(int argc, const char *argv[])
{
    enum Color c1;
    c1 = red;
    c1 = 126;//编译器不报错，但是潜规则不允许这样写，
             //这样写就失去了枚举的价值
    printf("%d\n", c1);

    return 0;
}

