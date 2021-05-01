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

    MSG msg1 = {1, 1001, "张三", 90};
    MSG msg2 = {2, 1002, "李四", 100};
    MSG msg3 = {3, 1003, "王五", 80};
    MSG msg4 = {4, 1004, "赵六", 95};

    if(msgsnd(msqid, &msg1, TEXTLEN, 0) == -1)
    {
        perror("msgsnd error");
        exit(1);
    }
    if(msgsnd(msqid, &msg2, TEXTLEN, 0) == -1)
    {
        perror("msgsnd error");
        exit(1);
    }
    if(msgsnd(msqid, &msg3, TEXTLEN, 0) == -1)
    {
        perror("msgsnd error");
        exit(1);
    }
    if(msgsnd(msqid, &msg4, TEXTLEN, 0) == -1)
    {
        perror("msgsnd error");
        exit(1);
    }

    system("ipcs -q");
    
    return 0;
}
