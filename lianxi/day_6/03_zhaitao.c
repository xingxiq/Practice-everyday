#include <stdio.h>

int main()
{
    int num = 1;
    int i = 1;
    while(i < 10)
    {
        num = (num +1)*2;
        i++;
    }
    printf("第一天共摘了%d个桃\n", num);

    return 0;
}
