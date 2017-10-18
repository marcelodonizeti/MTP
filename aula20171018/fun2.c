#include <stdio.h>
#include <stdlib.h>
int quocienteresto(int numerador, int denominador,int * pquociente, int * presto)
{
    if(denominador==0)
        return 0; //FALSO
    else
    {
        *presto= numerador%denominador;
        *pquociente= numerador/denominador;
        return 1; //VERDADEIRO
    }
}
int main()
{
    int numerador=0, denominador=0, quociente=0, resto=0;
    printf("Entre com um numero racional (num/den): ");
    scanf("%d/%d", &numerador, &denominador); getchar();
    if(quocienteresto(numerador, denominador, &quociente, &resto))
        printf("Quociente, resto= %d, %d", quociente, resto);
    else
        printf("ERRO!");
    return EXIT_SUCCESS;
}
