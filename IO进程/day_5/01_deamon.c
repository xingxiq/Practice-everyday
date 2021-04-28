#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, const char *argv[])
{
    pid_t pid;
    if((pid = fork()) == -1)
    {
        perror("fork error");
        exit(1);
    }
    else if(pid > 0)
    {
        exit(0);
    }
    else
    {
        setsid();
        chdir("/");
        umask(0);
        int maxfd = getdtablesize();
        int i;
        for(i = 0; i <= maxfd; i++)
        {
            close(i);
        }
        int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if(fd == -1)
        {
            perror("open error");
            exit(1);
        }
        while(1)
        {
            write(fd, "hello world\n", 12);
            sleep(1);
        }
    }

    return 0;
}

