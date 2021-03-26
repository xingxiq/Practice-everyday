#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int a[3][4] ={{47, 27, 42, 97},
                  {87, 42, 97, 42},
                  {98, 87, 87, 42}};
    int max = a[0][0];
    int n_i,n_j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
                n_i = i;
                n_j = j;
            }
        }
    }
    printf("%d %d %d\n", max, n_i, n_j);

    return 0;
}
