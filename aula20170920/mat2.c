#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b, resposta;
    double c;
    printf("Entre com o primeiro lado, com o segundo lado e com o valor do angulo: \n");
    scanf("%f, %f, %lf", &a, &b, &c);
    resposta=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(c));
    printf("Lado = %g", resposta);
    return 0;
}


