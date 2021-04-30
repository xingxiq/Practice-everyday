#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0);

int main(int argc, char const *argv[])
{
    int fd[2];
    if(pipe(fd) == -1)
    {
        ERRLOG("pipe error");
    }

    write(fd[1], "hello world", 11);
    write(fd[1], "nihao beijing", 13);
    char buf[32] = {0};
    read(fd[0], buf, sizeof(buf));
    printf("buf = %s\n", buf);
    
    return 0;
}
