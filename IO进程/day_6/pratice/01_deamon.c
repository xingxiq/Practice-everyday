#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0);


int main(int argc, char const *argv[])
{
    pid_t pid;
    if((pid = fork()) == -1)
    {
        ERRLOG("fork error");
    }
    else if(pid > 0)
    {
        exit(1);
    }
    else
    {
        setsid();

        chdir("/");

        umask(0);

        int num = getdtablesize();
        int i = 0;
        for(i = 0; i <= num; i++)
        {
            close(i);
        }

        int fd;
        if((fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1)
        {
            ERRLOG("fd open error");
        }
        while(1)
        {
            write(fd, "hello world\n", sizeof("hello world\n"));
            sleep(1);
        }

    }
    

    
    return 0;
}
