#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0x12345678;
    char *p = (char *)&a;
     if(*p == 0x12)
    {
        printf("大端\n");
    }
    else if(*p == 0x78)
    {
        printf("小端\n");
    }
    
    return 0;
}
