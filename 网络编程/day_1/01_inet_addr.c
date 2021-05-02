#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char const *argv[])
{
    char ip_str[] = "192.168.1.100";
    unsigned int ip_int = inet_addr(ip_str);

    printf("ip_int = %d\n", ip_int);

    unsigned char *p = (unsigned char *)&ip_int;
    printf("%u,%u,%u,%u\n", *p, *(p+1), *(p+2), *(p+3));
    
    return 0;
}
