#include <stdio.h>

void mychange1(int a, int b)
{
    printf("in: &a = %p, &b = %p\n",&a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("in:a = %d, b = %d\n",a, b);

}

void mychange2(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("in: *a = %d, *b = %d\n",*a, *b);
}

int main(int argc, const char *argv[])
{
    int a = 100;
    int b = 50;
    printf("before: &a = %p, &b = %p\n",&a, &b);
    printf("before: a = %d, b = %d\n",a, b);
    mychange1(a, b);
    printf("after: a = %d, b = %d\n",a, b);
    printf("*********************\n");
    printf("before: a = %d, b = %d\n",a, b);
    mychange2(&a, &b);
    printf("after: a = %d, b = %d\n",a, b);

    return 0;
}

