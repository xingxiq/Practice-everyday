#include "regi_login.h"


int main()
{
    print_tips();
    char choose = '0';
    while(1)
    {
        choose = choose_rlq();
        choose_num(&choose);
    }

    return 0;
}
