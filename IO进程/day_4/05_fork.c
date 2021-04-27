#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, const char *argv[])
{
#if 0
    int fd;
    if((fd = open("file.txt", O_RDWR, O_CREAT, O_TRUNC, 0664)) == -1)
    {
        perror("open error");
        return -1;
    }

    printf("fd = %d\n", fd);

    pid_t pid = fork();
    if(pid == -1)
    {
        perror("fork error");
        return -1;
    }
    else if(pid > 0)
    {
        write(fd,"hello world",strlen("hello world"));
        printf("父进程：offset = %ld\n", lseek(fd,0,SEEK_CUR));
    }
    else
    {
        sleep(1);
        printf("子进程：offset = %ld\n", lseek(fd,0,SEEK_CUR));
        lseek(fd,0,SEEK_SET);
        char buf[32] = {0};
        read(fd, buf,sizeof(buf));
        printf("buf = %s\n", buf);
    }
#endif


#if 1
    pid_t pid = fork();
    if(pid == -1)
    {
        perror("fork error");
        return -1;
    }
    else if(pid > 0)
    {
        int fd;
        if((fd = open("file,txt", O_RDWR)) == -1)
        {
            perror("open error");
            return -1;
        }
        write(fd, "hello world", strlen("hello world"));
        printf("父进程：offset = %ld\n",lseek(fd, 0, SEEK_CUR));
    }
    else
    {
        sleep(1);
        int fd;
        if((fd = open("file.txt", O_RDWR)) == -1)
        {
            perror("open error");
            return -1;
        }
        printf("子进程：offset = %ld\n", lseek(fd, 0, SEEK_CUR));
        char buf[32] = {0};
        read(fd,buf,sizeof(buf));
        printf("buf = %s\n",buf);
    }
#endif

    return 0;
}

