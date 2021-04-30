#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd[2];
    if(pipe(fd) == -1)
    {
        perror("pipe error");
        exit(1);
    }
    printf("fd[0] = %d, fd[1] = %d\n",fd[0], fd[1]);

    write(fd[1], "hello world", 11);
    write(fd[1], "nihao beijing", 13);

    char buf[32] = {0};
    read(fd[0], buf, 10);
    printf("buf = %s\n", buf);

    read(fd[0], buf, 10);
    printf("buf = %s\n", buf);
    
    return 0;
}
