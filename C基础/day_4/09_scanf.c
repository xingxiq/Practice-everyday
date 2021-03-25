#include "stdio.h"

int main()
{
#if 0
    int num;
    scanf("%d",&num);
    printf("num = %d\n",num);
#endif
#if 1
    int a,b,c;
    scanf("[%d,%d,%d]",&a,&b,&c);
    printf("a = %d, b = %d,c = %d\n",a,b,c);
#endif
#if 0
    float f;
    scanf("%f",&f);
    printf("f = %.2f\n",f);
#endif
#if 0
    char c;
    scanf("%c",&c);
    printf("c = %c %d\n",c,c);
#endif
#if 0
    char buf[100];
    scanf("%[^\n]",buf);
    printf("buf = %s\n",buf);
#endif

    return 0;
}
