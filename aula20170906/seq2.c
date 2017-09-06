#include <stdio.h>
int main()
{

    float ladotriangulo, alturatriangulo, areatriangulo;
    printf ("Entre com o comprimento da base do triangulo: ");
    scanf("%f", &ladotriangulo); getchar();
    printf ("Entre com a altura do triangulo: ");
    scanf("%f",&alturatriangulo); getchar();
    areatriangulo=(ladotriangulo*alturatriangulo)/2;
    printf("Area do triangulo: %.3f\n",areatriangulo);

}
