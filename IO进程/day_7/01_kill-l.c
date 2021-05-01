#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    while(1)
    {
        printf("pid = %d, hello world\n",getpid());
        sleep(1);
    }
    return 0;
}
