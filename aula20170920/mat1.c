#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 256
int main()
{
    float x1, x2, y1, y2, distancia;
    printf("entre com as cordenadas (x1,y1):\n");
    scanf("%f,%f", &x1, &y1);
    printf("entre com as cordenadas (x2,y2):\n");
    scanf("%f,%f", &x2, &y2);
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distancia eh; %f\n", distancia);
    return EXIT_SUCCESS;
}
