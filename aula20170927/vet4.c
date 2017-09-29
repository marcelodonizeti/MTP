#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
int main()
{
    srand(time(0));
    int numero[N];
    int i, maximo=0, minimo=0, tamanho=0;
    printf("Entre com o numero positivo entre um e mil: \n");
    scanf("%d", &tamanho);
    if(tamanho>0 && tamanho<=1000)
    {
    for(i=0;i<tamanho;i++)
        numero[i]=rand()%(10);
    minimo=numero[0];
    maximo=numero[0];
    for(i=0;i<tamanho;i++)
    {
        if(minimo>numero[i])
          minimo=numero[i];
        if(maximo<numero[i])
           maximo=numero[i];
    }
    }
    else
    {
        printf("\nValor inserido invalido!!!\n\n");
        return EXIT_SUCCESS;
    }
    printf("Valor maximo: %d\nMinimo: %d",maximo, minimo);
    return EXIT_SUCCESS;
}

