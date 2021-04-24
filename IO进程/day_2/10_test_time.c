#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
    time_t now;
    struct tm *tm_now;

    FILE *fp;
    if((fp = fopen("time.txt", "a+")) == NULL)
    {
        perror("fp open error");
        return -1;
    }
    int num = 0;
    char buf[32] = {0};
    while(fgets(buf,32,fp) != NULL)
    {
        num++;
    }
    while(1)
    {
        time(&now);
        tm_now = localtime(&now);
        num++;
        fprintf(fp, "%03d, %04d-%0d-%02d %02d:%02d:%02d\n", num,tm_now->tm_year + 1900,tm_now->tm_mon + 1,tm_now->tm_mday,tm_now->tm_hour,tm_now->tm_min,tm_now->tm_sec);
        fprintf(stdout, "%03d, %04d-%0d-%02d %02d:%02d:%02d\n", num,tm_now->tm_year + 1900,tm_now->tm_mon + 1,tm_now->tm_mday,tm_now->tm_hour,tm_now->tm_min,tm_now->tm_sec);
        fflush(fp);
        sleep(1);
    }
    

    return 0;
}

