#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define ERRLOG(errmsg) do{perror(errmsg);exit(1);}while(0);

int main(int argc, char const *argv[])
{
    int fd[2];
    if(pipe(fd) == -1)
    {
        ERRLOG("pipe error");
    }

    pid_t pid;
    if((pid = fork()) == -1)
    {
        ERRLOG("fork error");
    }
    else if (pid > 0)
    {
        write(fd[1], "hello world", 11);
        write(fd[1], "nihao beijing", 13);
        wait(NULL);
        
    }
    else
    {
        char buf[32] = {0};
        read(fd[0], buf, sizeof(buf));
        printf("buf = %s\n", buf);   
    }
    
    
    return 0;
}
