#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, const char *argv[])
{
    DIR *dirp;
    if((dirp = opendir(".")) == NULL)
    {
        perror("opendir error");
        return -1;
    }

    struct dirent *dir_ent;
    while((dir_ent = readdir(dirp)) != NULL)
    {
        printf("inode: %ld, filename: %s\n", dir_ent->d_ino, dir_ent->d_name);
    }

    return 0;
}

