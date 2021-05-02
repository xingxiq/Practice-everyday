//TCP网络编程之客户端

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>

#define ERRLOG(errmsg) do{perror(errmsg);\
                        printf("%s-%s-%d\n",__FILE__,__func__,__LINE__);\
                        exit(1);}while(0)

int main(int argc, char const *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s <ip> <port>\n", argv[0]);
        exit(1);
    }

    int sockfd;
    struct sockaddr_in serveraddr;
    socklen_t addrlen = sizeof(struct sockaddr_in);

    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        ERRLOG("socket error");
    }

    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr(argv[1]);
    serveraddr.sin_port = htons(atoi(argv[2]));

    

    if(connect(sockfd, (struct sockaddr *)&serveraddr, addrlen) == -1)
    {
        ERRLOG("connect error");
    }


    int fd;
    if((fd = open("/dev/input/event1", O_RDONLY)) == -1)
    {
        ERRLOG("open error");
    }

    unsigned char buf_2[5] = {0xff, 0x02, 0x00, 60, 0xff};
    unsigned char buf_3[5] = {0xff, 0x02, 0x01, 60, 0xff};
    

    if(send(sockfd, buf_2, 5, 0) == -1)
    {
        ERRLOG("send error");
    }
    if(send(sockfd, buf_3, 5, 0) == -1)
    {
        ERRLOG("send error");
    }

    
    while(1)
    {
        
        struct input_event buf_1;
        if(read(fd, &buf_1, sizeof(buf_1)) == -1)
        {
            ERRLOG("read error");
        }
    
        if(buf_1.type == EV_KEY  && buf_1.code == 32 && buf_1.value == 0)//D
        {
            buf_2[3] += 5; 
            if(send(sockfd, buf_2, 5, 0) == -1)
            {
                ERRLOG("send error");
            }
        }
        if(buf_1.type == EV_KEY && buf_1.code == 30 && buf_1.value == 0)//A
        {
            buf_2[3] -= 5; 
            if(send(sockfd, buf_2, 5, 0) == -1)
            {
                ERRLOG("send error");
            }
        }
        if(buf_1.type == EV_KEY && buf_1.code == 17 && buf_1.value == 0)//W
        {
            buf_3[3] -= 5; 
            if(send(sockfd, buf_3, 5, 0) == -1)
            {
                ERRLOG("send error");
            }
        }
        if(buf_1.type == EV_KEY && buf_1.code == 31 && buf_1.value == 0)//S
        {
            buf_3[3] += 5; 
            if(send(sockfd, buf_3, 5, 0) == -1)
            {
                ERRLOG("send error");
            }
        }
    }
   
    return 0;
}
