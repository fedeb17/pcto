#include <stdio.h>

void addizione()
{
    int x;
    int y;
    int risultato;
    int operazione;
    printf("inserisci un tuo numero a scelta\n");
    scanf("%d",&x);
    printf("inserisci un secondo numero a tua scelta\n");
    scanf("%d",&y);

    printf("scegli quale opzione seguire: 1) addizione\n 2) sottrazione\n 3) moltiplicazione\n 4) divisione\n");
    scanf("%d", &operazione);
    if(operazione==1)
    {
        risultato= x + y;
        printf("%d\n",risultato);
    }
    else if (operazione==2)
    {
        risultato= x - y;
        printf("%d\n",risultato);
    }
    else if (operazione==3)
    {
        risultato= x * y;
        printf("%d\n",risultato);
    }
    else if (operazione==4)
    {
        risultato= x / y;
        printf("%d\n",risultato);
    }
    else
    {
        printf("non esiste\n");
    }
}

int main()
{
    addizione();
    return(0);
}