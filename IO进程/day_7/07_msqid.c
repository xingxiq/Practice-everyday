#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>


int main(int argc, char const *argv[])
{
    int msqid;
    if((msqid = msgget(1000, IPC_CREAT | 0777)) == -1)
    {
        perror("msgget error");
        exit(1);
    }

    system("clear");
    printf("msqid = %d\n", msqid);
    system("ipcs -q");
    puts("**************************\n");

    if(msgctl(msqid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl error");
        exit(1);
    }
    system("ipcs -q");
    
    return 0;
}
