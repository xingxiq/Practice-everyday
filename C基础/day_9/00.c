#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a[] = "hello world";
    myfun(&a);

    return 0;
}

void myfun(char *p)
{
    int i = 1;
    while(*p)
    {
        *p = i;
        i++;
        p++;
    }
}


