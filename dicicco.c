#include <stdio.h>
void stampaCubo()
{
    int numero;
    int stampaCubo;

    printf("inserisci un numero\n");
    scanf("%d", &numero);
    stampaCubo= numero * numero;
    printf("il cubo di %d è %d\n", numero, stampaCubo);
}
int main()
{
    stampaCubo();
    stampaCubo();
    stampaCubo();
    stampaCubo();

    return(0);
}

