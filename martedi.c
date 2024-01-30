#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    printf("inserisci un numero\n");
    scanf(" %d", &numero1);
    printf("inserisci un secondo numero\n");
    scanf(" %d", &numero2);
    printf("inserisci un terzo numero\n");
    scanf(" %d", &numero3);
    if (numero2 - numero1 == numero3 - numero2)
    {
        printf("c'è la progressione\n");
    }
    else {
        printf("non c'è la progressione\n");
    }
}