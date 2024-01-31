#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    int numero;
    int r;
    int punti;

    printf("scegli un numero\n");
    scanf("%d", &numero);

    srand(time(NULL));
    r = rand() % 10;
    printf("%d\n",r);

    if(numero==r)
    {
        printf("hai indovinato\n");
        punti= punti + 1;
        printf("hai %d punti\n", punti);
    }
        else
    {
        printf("hai perso\n");
    }
}



