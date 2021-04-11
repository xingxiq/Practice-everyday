#include <stdio.h>

struct A
{
    double a;
    char b;
};

int main(int argc, const char *argv[])
{
    printf("%ld\n", sizeof(struct A));

    return 0;
}

