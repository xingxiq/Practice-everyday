#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    struct stat filestat;
    if(stat("file.txt", &filestat) == -1)
    {
        perror("stat error");
        return -1;
    }
    if((filestat.st_mode & S_IFSOCK) == S_IFSOCK)
    {
        printf("套接子文件\n");
    }
    if((filestat.st_mode & S_IFREG) == S_IFREG)
    {
        printf("普通文件\n");
    }


    return 0;
}

