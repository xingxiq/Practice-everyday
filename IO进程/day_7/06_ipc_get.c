#include <sys/types.h>
#include <sys/ipc.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    key_t key;
    if((key = ftok(".", 100)) == -1)
    {
        perror("ftok error");
        exit(1);
    }

    struct stat mystat;
    stat(".", &mystat);

    printf("key = %#x\n", key);
    printf("dev_id = %#lx, inode = %#lx\n", mystat.st_dev, mystat.st_ino);
    printf("proj_id = %#x\n", 100);
    
    
    return 0;
}
