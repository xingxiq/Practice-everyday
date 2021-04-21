#include <stdio.h>

int main(int argc, const char *argv[])
{
    if(fopen("file.txt", "r") == NULL)
    //if(fopen("file.txt", "w") == NULL)
    //if(fopen("file.txt", "a") == NULL)
    {
        //printf("fopen error\n");
        perror("fopen error\n");
    }

    return 0;
}

