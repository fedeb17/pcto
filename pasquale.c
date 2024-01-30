#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserisci tre numeri\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int n4;
    n4= n1 + n2;
    int n5;
    n5= n2 + n3;
    int n6;
    n6= n1 + n3;
    if(n4>n3 && n5>n1 && n6>n2)

    {
        printf("i tre numeri possono essere i lati di un triangolo \n");
    }
    else
    {
        printf("i tre numeri non possono essere i lati di un triangolo");
    }
    return(0);
}