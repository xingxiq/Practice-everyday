#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

typedef struct 
{
    long type;
    int id;
    char name[32];
    int score;
}MSG;

#define TEXTLEN (sizeof(MSG) - sizeof(long))

int main(int argc, char const *argv[])
{
    key_t key;
    if((key = ftok(".", 100)) == -1)
    {
        perror("ftok error");
        exit(1);
    }

    int msqid;
    if((msqid = msgget(key, IPC_CREAT | 0777)) == -1)
    {
        perror("msgget error");
        exit(1);
    }
    system("clear");
    printf("msqid = %d\n", msqid);
    system("ipcs -q");

    MSG msg;
    if(msgrcv(msqid, &msg, TEXTLEN, 0, 0) == -1)
    {
        perror("msgrcv error");
        exit(1);
    }
    printf("%d-%s-%d\n", msg.id, msg.name, msg.score);


    system("ipcs -q");
    
    return 0;
}
