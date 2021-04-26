#include <stdio.h>

int main(int argc, const char *argv[])
{
    char num = '0';
    while(num <='0' || num >='4')
    {
        printf("input:");
        scanf("%c", &num);
    }

    return 0;
}

