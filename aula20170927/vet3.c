#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int numeros[N], auxiliar=0, produtorio=1;
    int i, j, k;
    float media=0.f;
    for(i=0, j=9;i<N;i++,j--)
    {
    printf("Entre com o %d numero: ",i+1);
    scanf("%d", &numeros[i]);
    }
    for(i=0;i<N;i++)
    {
        auxiliar+=numeros[i];
        produtorio*=numeros[i];
    }
    printf("Seu somatorio: %d.\nSeu produtorio: %d", auxiliar,produtorio);
    return EXIT_SUCCESS;
}


