#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
double fazComplexo(double a, double b, char c)
{
if (c=='r'|| c=='R')
    return a+I*b;
else
    a*cos(b)+I*a*sin(b);
}
void mostraComplexo(double z, char c)
{
    if(c=='r'||c=='R')
        printf("%lf +I* %lf\n", creal(z), cimag(z));
    else
        printf("%lf /_%lf rad\n", cabs (z), carg(z));
}
int main()
{
    double z1,z2;
    double a, b;
    printf("Entre com um numero complexo Z1 (real, imaginario): \n");
    scanf("%lf, %lf", &a, &b); z1=fazComplexo(a,b,'r');
    printf("Entre com um numero complexo Z2 (real, imaginario): \n");
    scanf("%lf, %lf", &a, &b); z2=fazComplexo(a,b,'r');
    printf("A soma desses numeros: \n");
    printf("Forma retangular: "); mostraComplexo(z1+z2,'r');
    printf("Forma polar: "); mostraComplexo(z1+z2,'p');
    return EXIT_SUCCESS;
}


