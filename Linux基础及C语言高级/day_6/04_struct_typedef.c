#include <stdio.h>

typedef struct Student
{
    int id;
    char name[30];
    char sex;
    int score;
}Stu;

int main(int argc, const char *argv[])
{
    Stu s1 = {
    .id = 21031,
    .name = "liming",
    .sex = 'm',
    .score = 96
    };
    printf("id = %d\n", s1.id);
    printf("name = %s\n", s1.name);
    printf("sex = %c\n", s1.sex);
    printf("score = %d\n", s1.score);

    return 0;
}

