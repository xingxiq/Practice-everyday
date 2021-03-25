#include <stdio.h>

int main()
{
    puts("hello world");
    puts("");
    puts("nihao bei\0jing");

    char s[] = "welcome to hqyj";
    puts(s);

    char *str = "hello kitty";
    puts(str);

    return 0;
}
