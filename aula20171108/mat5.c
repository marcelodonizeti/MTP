#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main()
{
    Matriz A,inversa,adjA,b,c;
    double a;
    int ordem;
    printf("Digite a ordem da matriz dos coeficientes: ");
    scanf("%d", &ordem);
    A=criarMatriz(ordem,ordem);
    b=criarMatriz(ordem,!0);
    c=criarMatriz(ordem,!0);
    printf("Digite a matriz dos coeficientes: \n\n");
    preencherMatriz(A);
    inversa=criarMatriz(ordem,ordem);
    printf("Digite a matriz dos resultados: \n\n");
    preencherMatriz(b);
    printf("Sua matr%cz:\n\n",161);
    imprimirMatriz(A);
    a= determinante(A);
    adjA=adjunta(A);
    if(a)
    {
        inversa=Inversa(A,adjA,a);
        printf("\nMatr%cz das incognitas:\n",161);
        c=multiplicacao(inversa,b,c,ordem,ordem,ordem,!0);
        imprimirMatriz(c);
    }
    if(!a)
        printf("-Sua matr%cz n%co %c invers%cvel, logo, %c imposs%cvel aplicar o m%ctodo.\n\n",161,198,130,161,130,161,130);
    destruirMatriz(A);
    destruirMatriz(adjA);
    destruirMatriz(inversa);
    destruirMatriz(c);
    destruirMatriz(b);
    return EXIT_SUCCESS;
}
