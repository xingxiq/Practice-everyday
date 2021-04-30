#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0);

int main(int argc, char const *argv[])
{
    if(mkfifo("file.txt", 0664) == -1)
    {
        if(errno != 17)
        {
            ERRLOG("mkfifo error");
        }
    }

    int fd;
    if((fd = open("file.txt", O_RDWR)) == -1)
    {
        ERRLOG("open error");
    }
    write(fd, "hello world", sizeof("hello world"));

    char buf[32] = {0};
    read(fd, buf, sizeof(buf));
    printf("buf = %s\n", buf);

    
    return 0;
}
