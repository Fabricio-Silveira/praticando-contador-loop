# praticando-contador-loop

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vida = 20;
    while(vida >= 0){
        printf("Voce esta vivo\n");
        printf("%d",vida);
        printf("----\n");
        vida--;
    }

    int vida2 = 1;
    while (vida2 <= 10){
        printf("Voce esta vivo2\n");
        printf("%d",vida2);
        printf("----\n");
        vida2++;
    }
        return 0;

}
