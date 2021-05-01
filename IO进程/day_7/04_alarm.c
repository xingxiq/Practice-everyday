#include <stdio.h>
#include <unistd.h>
#include <signal.h>


int main(int argc, char const *argv[])
{
    int ret;
    ret = alarm(5);
    printf("ret = %d\n", ret);
    
    sleep(1);
    ret = alarm(5);
    printf("ret = %d\n", ret);

    while(1)
    {
        printf("hello world\n");

        sleep(1);
    }
    
    return 0;
}
