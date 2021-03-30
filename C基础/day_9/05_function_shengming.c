#include <stdio.h>

void myfun();
void myfun1();

int main(int argc, const char *argv[])
{
    myfun1();

    return 0;
}


void myfun()
{
    printf("hello world\n");
}

void myfun1()
{
    myfun();
    printf("welcome to china\n");
}
