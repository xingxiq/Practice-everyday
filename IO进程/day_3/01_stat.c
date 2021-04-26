#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    struct stat filestat;
    if(stat("./file.txt", &filestat) == -1)
    {
        perror("stat error");
        return -1;
    }
    printf("inode: %ld\n", filestat.st_ino);
    printf("mode: %#o\n", filestat.st_mode);
    printf("hard link num: %ld\n", filestat.st_nlink);
    printf("uid: %d, gid: %d\n", filestat.st_uid, filestat.st_gid);
    printf("sizeof: %ld\n", filestat.st_size);

    return 0;
}

