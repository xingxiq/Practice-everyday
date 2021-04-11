#include <stdio.h>

union A
{
    int a;
    char b;
};

int main(int argc, const char *argv[])
{
    union A s1;
    s1.a = 0x12345678;
    printf("%#x\n", s1.b);
    if(0x78 == s1.b)
    {
        printf("小端\n");
    }
    else if(0x12 == s1.b)
    {
        printf("大端\n");
    }

    return 0;
}

