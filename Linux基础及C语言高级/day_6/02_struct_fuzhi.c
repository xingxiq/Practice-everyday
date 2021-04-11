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

    struct Student s2;
    s2 = s1;

    printf("id : %d\n", s2.id);
    printf("name : %s\n", s2.name);
    printf("sex : %c\n", s2.sex);

  
    return 0;
}

