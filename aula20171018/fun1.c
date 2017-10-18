#include <stdio.h>
#include <stdlib.h>

int somafracao(int numerador, int denominador, int numerador1, int denominador1,int * pnumR, int * pdenR)
{
    if(denominador==0||denominador1==0)
        return 0; //FALSO
    else
    {
        *pnumR= denominador1*numerador+denominador*numerador1;
        *pdenR= denominador*denominador1;
        return 1; //VERDADEIRO
    }
}

int main()
{
    int numerador, denominador, numerador1, denominador1, numR, denR;
    printf("Entre com um numero racional (num/den): ");
    scanf("%d/%d", &numerador, &denominador); getchar();
    printf("Entre com outro numero racional (num/den): ");
    scanf("%d/%d", &numerador1, &denominador1); getchar();
    if(somafracao(numerador,denominador,numerador1,denominador1,&numR,&denR))
    printf("Resultado soma= %d/%d \n", numR, denR);
    else
        printf("Erro!\n");
    return EXIT_SUCCESS;
}
