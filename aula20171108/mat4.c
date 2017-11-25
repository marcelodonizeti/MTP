#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
    Matriz A,B,C;
    int i, colunaA,linhaA, colunaB,linhaB;
    printf("Digite a quantidade de linhas e colunas da Matr%cz A(linhaxcoluna): \n",161);
    scanf("%dx%d", &linhaA, &colunaA);
    printf("Digite a quantidade de linhas e colunas da Matr%cz B(linhaxcoluna): \n",161);
    scanf("%dx%d", &linhaB, &colunaB);
    A=criarMatriz(linhaA,colunaA);
    B=criarMatriz(linhaB,colunaB);
    C=criarMatriz(colunaA,linhaB);
    printf("Digite a matr%cz A: \n",161);
    preencherMatriz(A);
    printf("Digite a matr%cz B: \n",161);
    preencherMatriz(B);
    if(colunaA==linhaB)
    {
        printf("\n\nA matr%cz C produto de AB %c: \n",161,130);
        C= multiplicacao(A,B,C,linhaA,colunaA, linhaB,colunaB);
        imprimirMatriz(C);
    }
    else
        printf("\n\nMatr%czes n%co multiplic%cveis!!! \n\n",161,198,160);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(C);
    return EXIT_SUCCESS;

}
