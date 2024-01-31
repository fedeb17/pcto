#include <stdio.h>

int main()
{
    int ascissa;
    int ordinata;

    printf("inserisci le coordinate di un punto in un piano cartesiano\n");
    scanf("%d %d", &ascissa &ordinata);

    if(ascissa>0 && ordinata>0)
    {
        printf("il punto si trova nel primo quadrante\n");
    }
    else if(ascissa<0 && ordinata>0)
    {
        printf("il punto si trova nel secondo quadrante\n");
    }
    else if(ascissa<0 && ordinata<0)
    {
        
    }



}