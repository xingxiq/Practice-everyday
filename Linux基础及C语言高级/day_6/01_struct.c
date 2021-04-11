#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[30];
    int score;
    char sex;
};

int main(int argc, const char *argv[])
{
    struct Student s1;
    s1.id = 21031001;
    strcpy(s1.name, "liulei");
    s1.sex = 'w';
    printf("id : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("sex : %c\n", s1.sex);

    printf("-------------------------\n");

    struct Student *ps2;
    ps2 = (struct Student *)malloc(sizeof(struct Student));
    ps2->id = 21031002;
    strcpy(ps2->name, "lilongwei");
    ps2->sex = 'm';
    printf("id : %d\n", ps2->id);
    printf("name : %s\n", ps2->name);
    printf("sex : %c\n", ps2->sex);

    free(ps2);
    ps2 = NULL;


    return 0;
}

