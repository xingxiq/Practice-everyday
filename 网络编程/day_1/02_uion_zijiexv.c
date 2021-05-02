#include <stdio.h>

typedef union _MAXMIN
{
    int a;
    char b;
}maxmin;

int main(int argc, char const *argv[])
{
    maxmin mn;
    mn.a = 0x12345678;
    if(mn.b == 0x12)
    {
        printf("大端\n");
    }
    else if(mn.b == 0x78)
    {
        printf("小端\n");
    }
    
    return 0;
}

