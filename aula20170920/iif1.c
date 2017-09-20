#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int cont=0, i;
    srand(time(0));
    float probuser;
    printf("Entre com uma probabilidade [0.0~1.0]:" );
    scanf("%f", &probuser);
    for(i=0; i<1000; i++)
    if((float)rand()/(float)RAND_MAX<probuser)
            cont++;
    printf("Contagem em 1000: %d\n", cont);
    return 0;
}

