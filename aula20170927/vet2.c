#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int numeros[N], aux=0;
    int i, j, k;
    float media=0.f;
    for(i=0, j=9;i<N;i++,j--)
    {
    printf("Entre com o %d numero:",i+1);
    scanf("%d", &numeros[i]);
    }
    for(i=0, j=9;k<5;i++,j--,k++)
    {
        aux=numeros[i];
        numeros[i]=numeros[j];
        numeros[j]=aux;
    }
    printf("Seu vetor: \n");
    for(i=0;i<N;i++)
        printf(" %d",numeros[i]);
    return EXIT_SUCCESS;
}

