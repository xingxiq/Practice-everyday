#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 5;
    printf("%d\n", *p);
    free(p);
    p = NULL;

    return 0;
}

