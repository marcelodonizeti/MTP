#include <stdio.h>
int main()
{
    int numero;
    printf("Entre com um numero: ");
    scanf("%d",&numero);
    if(numero%2)
    {
        printf("Numero impar. \n");
        if(!(numero %5)) printf("Numero multiplo de 5. \n");
    }

    else
        {
            printf("Numero par. \n");
            if(!(numero%3)) printf("Numero multiplo de 3 \n");
            if(!(numero%7)) printf("Numero multiplo de 7. \n");
        }
    return 0;
}
