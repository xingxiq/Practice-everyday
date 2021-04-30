#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0)

int main(int argc, char const *argv[])
{
    if(mkfifo("myfifo_1", 0664) == -1)
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
    if(mkfifo("myfifo_2", 0664) == -1)
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




    int fd_1,fd_2;
    if((fd_1 = open("myfifo_1", O_RDWR)) == -1)
    {
        ERRLOG("open error");
    }
    if((fd_2 = open("myfifo_2", O_RDWR)) == -1)
    {
        ERRLOG("open error");
    }



    char buf[32] = {0};

    while(1)
    {
        if((read(fd_1, buf, 32)) == -1)
        {
            ERRLOG("read error");
        }
        printf("buf = %s\n", buf);

        memset(buf, 0, sizeof(buf));

        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf) - 1] = '\0';

        if(write(fd_2, buf, sizeof(buf)) == -1)
        {
            ERRLOG("write error");
        }

        memset(buf, 0, sizeof(buf));
    }
    
    return 0;
}
