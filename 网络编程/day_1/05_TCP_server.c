//TCP网络编程之服务器

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>

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
    struct sockaddr_in clientaddr;

    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        ERRLOG("socket error");
    }

    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr(argv[1]);
    serveraddr.sin_port = htons(atoi(argv[2]));

    if(bind(sockfd, (struct sockaddr *)&serveraddr, addrlen) == -1)
    {
        ERRLOG("bind error");
    }

    if(listen(sockfd, 5) == -1)
    {
        ERRLOG("listen error");
    }

    if(accept(sockfd, (struct sockaddr *)&clientaddr, &addrlen) == -1)
    {
        ERRLOG("accept error");
    }

    printf("ip:%s, port:%d\n", inet_ntoa(clientaddr.sin_addr), ntohs(clientaddr.sin_port));
    
    return 0;
}
