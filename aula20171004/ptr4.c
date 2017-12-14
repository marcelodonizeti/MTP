#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *P;
    float numero1=0, numero2=0, soma=0;
    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    soma=numero1+numero2;
    printf("\n\n0x%p %g;",&numero1,numero1);
    printf(" 0x%p %g;",&numero2, numero2);
    printf(" 0x%p %g\n\n\n",&soma, soma);
    return EXIT_SUCCESS;

}
