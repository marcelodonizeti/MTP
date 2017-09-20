#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double b,n, resposta;
    printf("Entre com um numero: \n");
    scanf("%lf", &n);
    printf("Entre com a base: \n");
    scanf("%lf", &b);
    resposta= log10(n)/log10(b);
    printf("Resposta= %f", resposta);
    return 0;
}

