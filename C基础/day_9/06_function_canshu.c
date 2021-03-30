#include <stdio.h>

void add(int a, int b);

int main(int argc, const char *argv[])
{
    add(10, 20);

    return 0;
}


void add(int a, int b)
{
    int sum = a + b;
    printf("%d + %d = %d\n",a, b, sum);
}
