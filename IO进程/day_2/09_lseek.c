#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int fd;
    if((fd = open(argv[1], O_RDWR, O_APPEND)) == -1)
    {
        perror("fd open error");
        return -1;
    }

    off_t offset = lseek(fd, 0, SEEK_CUR);
    printf("offset = %ld\n", offset);
    offset = lseek(fd, 6, SEEK_CUR);
    printf("offset = %ld\n", offset);
    write(fd, "nihao beijing", strlen("nihao beijing"));

    puts("***********************\n");
    offset = lseek(fd, 0, SEEK_CUR);
    printf("offset = %ld\n", offset);

    lseek(fd, 0, SEEK_SET);

    ssize_t bytes;
    char buf[32] = {0};
    bytes = read(fd, buf, sizeof(buf));
    printf("bytes = %ld, buf = [%s]\n", bytes, buf);


    return 0;
}

