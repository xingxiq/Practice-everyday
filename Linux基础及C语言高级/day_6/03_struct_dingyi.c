#include <stdio.h>
#include <string.h>
#if 0 //1
struct Student
{
    int id;
    char name[30];
};
#endif 

#if 0 //2
struct Strudent
{
    int id;
    char name[30];
}s;
#endif

struct Strudent
{
    int id;
    char name[30];
    int score;
    char sex;
};

int main(int argc, const char *argv[])
{

#if 0  //1
    struct Student s;
    s.id = 123;
    strcpy(s.name, "zhangsan");
#endif

#if 0 //2
    s.id = 123;
    strcpy(s.name, "zhangsan");
#endif 

    struct Strudent s = {
        .name = "zhangsan",
        .score = 98};
    printf("name = %s\n", s.name);
    printf("score = %d\n", s.score);


    return 0;
}

