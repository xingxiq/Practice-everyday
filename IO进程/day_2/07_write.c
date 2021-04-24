#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, const char *argv[])
{

    //write(1,"hello world", strlen("hello world"));
    //ssize_t bytes = write(1, "hello wprld", 7);
    //printf("bytes = %ld", bytes);
    
    
    int fd;
    if((fd = open("file", O_WRONLY | O_CREAT | O_TRUNC)) == -1)
    {
        perror("fd open error");
        return -1;
    }

    char buf[] = "hello world nihao beijing";
    write(fd, buf,20);

    return 0;
}

