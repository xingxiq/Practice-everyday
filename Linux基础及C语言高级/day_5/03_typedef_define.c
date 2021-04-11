#include <stdio.h>

#define farsight1 int *
typedef int *farsight2;

int main(int argc, const char *argv[])
{
    int a = 5;
    int b = 10;
    /*
      farsight1 p1, p2;
      p1 = &a;
      p2 = &b;
     */
    farsight2 p1, p2;
    p1 = &a;
    p2 = &b;

    return 0;
}

