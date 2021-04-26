#include "regi_login.h"


void print_tips()
{
    printf("************************************\n");
    printf("*  1: register  2: login  3: quit  *\n");
    printf("************************************\n");
}


char choose_rlq()
{
    char choose = '0';
    while(choose <= '0' || choose >= '4')
    {
        printf("please choose :");
        scanf(" %c", &choose);
    }
    return choose;
}

int choose_num(char *choose)
{
    switch(*choose)
    {
    case '1':
        fun_register();
        break;
    case '2':
        fun_login();
        break;
    case '3':
        exit(-1);
        break;
    }
}


int fun_register()
{
    FILE *fp;
    if((fp = fopen("log.txt", "a+")) == NULL)
    {
        perror("fopen error");
        exit(-1);
    }
    printf("input your name:");
    char buf_w[32] = {0};
    char buf_f[32] = {0};
    scanf(" %s", buf_w);
    printf("input your password:");
    char buf_pw[32] = {0};
    scanf(" %s", buf_pw);
    while(fgets(buf_f,32,fp) != NULL)
    {
        if(strncmp(buf_w,buf_f,strlen(buf_w)) == 0)
        {
            printf("user %s already exist!!!\n",buf_w);
            return -1;
        }
    }
    buf_w[strlen(buf_w)] = ':';
    strcat(buf_w,buf_pw);
    buf_w[strlen(buf_w)] = '\n';
    fprintf(fp,"%s",buf_w);
    fclose(fp);
    printf("register OK\n");
}


int fun_login()
{
    FILE *fp;
    if((fp = fopen("log.txt", "r")) == NULL)
    {
        perror("fopen error");
        exit(-1);
    }
    printf("input your name:");
    char buf_w[32] = {0};
    char buf_f[32] = {0};
    scanf(" %s", buf_w);
    printf("input your password:");
    char buf_pw[32] = {0};
    scanf(" %s", buf_pw);
    buf_w[strlen(buf_w)] = ':';
    strcat(buf_w,buf_pw);
    buf_w[strlen(buf_w)] = '\n';
    while(fgets(buf_f,32,fp) != NULL)
    {
        if(strcmp(buf_w,buf_f) == 0)
        {
            printf("login OK\n");
            return 0;
        }
    }
    printf("name or password is worry!!!\n");
}
