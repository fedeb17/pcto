#include <stdio.h>

void stampalettera()
{
    char lettera;
    printf("inserisci una lettera\n");
    scanf("%c",&lettera);
    
    if((lettera>='a'&& lettera<='z')||(lettera>='A' && lettera <='Z'))
    {
        if(lettera=='a'|| lettera=='A'|| lettera=='e'|| lettera=='E'|| lettera=='i'|| lettera=='I'|| lettera=='o'|| lettera=='O'|| lettera=='u'|| lettera=='U')
       {
        printf("la tua lettera è una vocale\n");
       }
       else
       {
        printf("la tua lettera è una consonante\n");
       }
}
else
{
    printf("non è una lettera\n");
}
}
int main()
{
    stampalettera();

    return(0);
}

