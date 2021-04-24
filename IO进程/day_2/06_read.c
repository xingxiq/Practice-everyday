#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    //char buf[32] = {0};
    //ssize_t bytes = read(0, buf, 32);
    //printf("bytes = %ld, buf = %s\n", bytes, buf);
    
    int fd;
    if((fd = open("file", O_RDONLY)) == -1)
    {
        perror("fd open error");
        return -1;
    }

    ssize_t bytes;
    char buf[32] = {0};
    //bytes = read(fd, buf, sizeof(buf));
    //printf("bytes = %ld, buf = %s\n", bytes, buf);

    memset(buf, 0, 32);
    bytes = read(fd, buf, sizeof(buf));
    printf("bytes = %ld, buf = %s\n", bytes, buf);

    return 0;
}

