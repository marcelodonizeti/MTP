#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 256
int main()
{
    float x1, x2, y1, y2, distancia;
    printf("Entre com as coordenadas X1, Y1: \n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("Entre com as coordenadas X2, Y2: \n");
    scanf("%f", &x2);
    scanf("%f", &y2);
    distancia= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distancia entre os pontos = %f", distancia);
    return 0;
}

