#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float calculodedelta(float a, float b, float c)
{return  (pow(b,2)-4*a*c);}


float calculodasraizes(float a, float b, float c)
    {printf("Raíz 1: %f\nRaíz 2: %f\n\n\n\n", (-b+sqrt(calculodedelta(a,b,c)))/(2*a), (-b-sqrt(calculodedelta(a,b,c)))/(2*a));}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a=0, b=0, c=0, delta=0, x1=0, x2=0;
    printf("Entre com o valor de a: ");
    scanf("%f", &a);
    getchar();
    printf("\nEntre com o valor de b: ");
    scanf("%f", &b);
    getchar();
    printf("\nEntre com o valor de c: ");
    scanf("%f", &c);
    getchar();
    if(calculodedelta(a,b,c)<0)
        printf("\n\nNão há raízes reais!\n\n\n");
    if(calculodedelta(a,b,c)==0)
        printf("\n\nAs raízes são congruentes e iguais a: %f\n\n\n", -b/(2*a));
    if(calculodedelta(a,b,c)>0)
        calculodasraizes(a,b,c);
    return EXIT_SUCCESS;
}
