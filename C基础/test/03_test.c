#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 0,b = 0,c = 0;

if(++a>0||++b>0) ++c;

printf("a = %d,b=%d,c=%d",a,b,c);
    return 0;
}

