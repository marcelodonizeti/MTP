#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b, resposta;
    double c;
    printf("Entre com o primeiro lado: \n");
    scanf("%f", &a);
    printf("Entre com segundo lado: \n");
    scanf("%f", &b);
    printf("Entre com o valor do angulo: \n");
    scanf("%lf", &c);
    resposta=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(c));
    printf("Lado = %f", resposta);
    return 0;
}


