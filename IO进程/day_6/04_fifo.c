#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0);

int main(int argc, char const *argv[])
{
    if(mkfifo("myfifo", 0664) == -1)
    {
        if(errno != 17)
        {
            ERRLOG("mkfifo error");
        }
        
    }
    else
    {
        printf("fifo file has created successfully\n");
    }

    int fd;
    if((fd = open("myfifo", O_RDWR)) == -1)
    {
        ERRLOG("open error");
    }

    write(fd, "hello world", 11);
    write(fd, "nihao beijing", 13);

    char buf[32] = {0};
    read(fd, buf, 32);
    printf("buf = %s\n", buf);

    read(fd, buf, 32);
    printf("buf = %s\n", buf);    
    
    return 0;
}
