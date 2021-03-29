#include <stdio.h>
#include <string.h>

int main()
{
    char ch[] = "asd:ffgh:jrtya:sdgsf";
    char *p = strtok(ch, ":");
    printf("%s\n",p);
    p = strtok(NULL, ":");
    printf("%s\n",p);
    p = strtok(NULL, ":");
    printf("%s\n",p);
    p = strtok(NULL, ":");
    printf("%s\n",p);

    return 0;
}
