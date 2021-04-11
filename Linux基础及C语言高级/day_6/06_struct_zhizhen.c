#include <stdio.h>

struct Student
{
    int id;
    char sex;
    int (*p)();
};

int func()
{
    printf("hello world\n");
}

int main(int argc, const char *argv[])
{
    struct Student s;
    s.p = func;
    s.p();
    func();


    return 0;
}

