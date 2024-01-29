#include <stdio.h>

int main()
{
    int numero;
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    scanf("%d %d %d %d %d", &numero, &numero1, &numero2, &numero3, &numero4);
    int risultato = numero + numero1 + numero2 + numero3 + numero4;
    printf("il tuo risultato è: %d \n", risultato);
    return(0);
}