#include <stdio.h>

int add(int a, int b);

int main(int argc, const char *argv[])
{
    int num = 0;
    num = add(10, 20);
    printf("%d\n",num);

    return 0;
}


int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
