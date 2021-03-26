#include <stdio.h>
#include <string.h>

int main()
{
    char s[32] = {"hello world"};
    printf("strlen = %ld\n", strlen(s));
    printf("sizeof = %ld\n", sizeof(s));
    char buf[] = {'a', 'b', 'c', 'd', 'e'};
    printf("sizeof(buf) = %ld\n",sizeof(buf));

    return 0;
}
