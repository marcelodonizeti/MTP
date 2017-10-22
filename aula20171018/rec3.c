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

int MDC(int u, int v)
{
    if(u==v||v==0)
        return u;
    if(u==0)
        return v;
    if(u%2==0&&v%2!=0)
        return MDC(u/2,v);
    if(u%2!=0&&v%2==0)
        return MDC(u,v/2);
    if(u%2==0&&v%2==0)
        return  2*MDC(u/2,v/2);
    if(u>v)
        return  MDC((u-v)/2,v);
    if(u<v)
        return MDC((v-u)/2,u);
}
int main()
{
    int numerador, denominador, numerador1, denominador1, numR, denR, u, v;
    printf("Entre com um numero racional (num/den): ");
     scanf("%d/%d", &numerador, &denominador);
    getchar();
    printf("Entre com outro numero racional (num/den): ");
     scanf("%d/%d", &numerador1, &denominador1);
    getchar();
    if(somafracao(numerador,denominador,numerador1,denominador1,&numR,&denR))
        printf("Resultado soma= %d/%d \n", numR/MDC(numR,denR), denR/MDC(numR,denR));
    else
        printf("Erro!\n");
    return EXIT_SUCCESS;
}
