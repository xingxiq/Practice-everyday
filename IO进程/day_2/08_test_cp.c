#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    int fd_r,fd_w;
    if((fd_r = open(argv[1], O_RDONLY)) == -1)
    {
        perror("fd_r open error");
        return -1;
    }
    if((fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1)
    {
        perror("fd_w open error");
        return -1;
    }
    char buf[32] = {0};
    ssize_t bytes;
    while((bytes = read(fd_r, buf, 32)) != 0)
    {
        write(fd_w, buf,bytes);
    }
    printf("cp down\n");


    return 0;
}

