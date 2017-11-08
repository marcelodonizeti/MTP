#include <stdlib.h>
#include "matriz.h"
int main()
{
    Matriz A, adjA;
    int ordem;
    printf("Entre com a ordem da matriz: ");
    scanf("%d", &ordem);
    A= criarMatriz(ordem,ordem);
    preencherMatriz(A);
    printf("Original: \n)");
    imprimirMatriz(A);
    printf("Determinante: %lg", determinante(A));
    destruirMatriz(A);
    return EXIT_SUCCESS;
}
