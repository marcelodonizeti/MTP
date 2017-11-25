#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
    Matriz A,inversa,adjA;
    double a;
    int ordem;
    printf("Entre com a ordem da matr%cz: ",161);
    scanf("%d", &ordem);
    A=criarMatriz(ordem,ordem);
    preencherMatriz(A);
    inversa=criarMatriz(ordem,ordem);
    printf("Sua matr%cz:\n\n",161);
    imprimirMatriz(A);
    adjA=adjunta(A);
    a= determinante(A);
    if(a)
    {
        printf("\nMatr%cz inversa: \n\n",161);
        inversa=Inversa(A,adjA,a);
        imprimirMatriz(inversa);
    }
    if(!a)
        printf("Sua matr%cz n%co %c invers%cvel!!!\n\n",161,198,130,161);
    destruirMatriz(A);
    destruirMatriz(adjA);
    destruirMatriz(inversa);
    return EXIT_SUCCESS;
}
