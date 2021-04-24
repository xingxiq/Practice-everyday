#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    int fd;
    //if((fd = open(argv[1], O_RDONLY)) == -1)
    //if((fd = open("test.txt", O_RDONLY | O_CREAT | 0664)) == -1);
    //if((fd = open("file.txt", O_RDONLY | O_CREAT | O_EXCL | 0664)) == -1);
    //if((fd = open("file.name", O_RDONLY | O_CREAT | O_TRUNC | 0664)) == -1);
    //if((fd = open("file.name", O_RDONLY | O_CREAT | O_APPEND)) == -1);
    
    if((fd = open("", O_RDONLY | O_CREAT | O_APPEND)) == -1)
    {
        perror("fd open error");
        return -1;
    }

    close(fd);

    return 0;
}

