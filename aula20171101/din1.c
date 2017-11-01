#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float media(float* numeros, int quantidade)
{
    float m=0.0f;
    int i;
    for(i=0;i<quantidade;i++) m+= numeros[i];
    m/=quantidade;
    return m;
}
float desviopadrao(float *numeros, int quantidade)
{
    float m= media(numeros, quantidade);
    float dp=0.0f;
    int i;
    for(i=0; i<quantidade;i++) dp += pow((numeros[i]- m), 2);
    dp/=(quantidade-1);
    return sqrt(dp);
}
int main()
{
    int quantidade, i, j;
    float * numeros;
    printf("Quantos numeros voce precisa? ");
    scanf("%d", &quantidade);
    numeros= (float *)malloc(quantidade*sizeof(float));
    for(i=0;i<quantidade;i++)
    {
        printf("entre com o %d numero: ", i+1);
        scanf("%f", numeros+i);
    }
    printf("A media dos numeros e: %f\n", media(numeros, quantidade));
    printf("O desvio padrao dos numeros e: %f\n", desviopadrao(numeros,quantidade));
    free(numeros);
    return EXIT_SUCCESS;
}
