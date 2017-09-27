#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
int main()
{
    srand(time(0));
    int numero[N];
    int i, maximo;
    float media=0.f;
    printf("Entre com o numero maximo a ser sorteado: \n");
    scanf("%d", &maximo);
    for(i=0;i<N;i++)
        numero[i]=rand()%(maximo+1);
    for(i=0;i<N;i++)
        media+=numero[i];
    media/=N;
    printf("A media dos %d numeros: %f\n",N, media);
    return EXIT_SUCCESS;
}
