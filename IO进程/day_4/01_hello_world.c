#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    while(1)
    {
        printf("hello world\n");
        sleep(1);
    }
    
    return 0;
}
