#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v1 = 11;
    int v2 = 20;

    while (v1 <= v2)
    {  printf ("ainda nao no v1\n %d\n ---\n",v1);

    if (v1 == 16)
         {
            int v2 = 6;
            while (v2 >= 2){
                printf ("ainda nao e o suficiente no v2\n %d\n ---\n",v2);

                    v2 --;}
        }
                v1 ++;
    }

    return 0;

}
