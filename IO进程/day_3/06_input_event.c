#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>

int main(int argc, const char *argv[])
{
    int fd;
    if((fd = open("/dev/input/event1", O_RDONLY)) == -1)
    {
        perror("open error");
        return -1;
    }

    struct input_event buf;
    while(1)
    {
        if(read(fd, &buf, sizeof(buf)) == -1)
        {
            perror("read error");
            return -1;
        }
        

        //printf("type: %d, code: %d, value:%d\n", buf.type,buf.code,buf.value);
#if 0
        if(buf.type == EV_KEY && buf.value == 1)
        {
            printf("按键被按下了\n");
        }
        if(buf.type == EV_KEY && buf.value == 0)
        {
            printf("按键被弹起了\n");
        }
        if(buf.type == EV_KEY && buf.value == 2)
        {
            printf("按键持续按下\n");
        }
#endif
#if 1
        if(buf.type == EV_KEY && buf.code == 17 && buf.value == 1)
        {
            printf("w被按下了\n");
        }
        if(buf.type == EV_KEY && buf.code == 30 && buf.value == 1)
        {
            printf("a被按下了\n");
        }
        if(buf.type == EV_KEY && buf.code == 31 && buf.value == 1)
        {
            printf("s被按下了\n");
        }
        if(buf.type == EV_KEY && buf.code == 32 && buf.value == 1)
        {
            printf("d被按下了\n");
        }
#endif

    }

    return 0;
}

