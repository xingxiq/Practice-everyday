#include <stdio.h>

struct Student
{
    int id;
    char sex;
};

int main(int argc, const char *argv[])
{
    struct Student arr_s[2]={
    [0] = {.id = 1001,
            .sex = 'w'},
    [1] = {.id = 1002,
            .sex = 'm'}
    };
    printf("id = %d\n", arr_s[0].id);
    printf("sex = %c\n", arr_s[0].sex);
    printf("id = %d\n", arr_s[1].id);
    printf("sex = %c\n", arr_s[1].sex);

    return 0;
}

