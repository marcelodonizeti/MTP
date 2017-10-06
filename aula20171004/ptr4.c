#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int *P;
    int numero1=0, numero2=0, soma=0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite 2 números (N1, N2): ");
    scanf("%d, %d",&numero1, &numero2);
    getchar();
    soma=numero1+numero2;
    printf("\n\n0x%p %u;",&numero1,numero1);
    printf(" 0x%p %u;",&numero2, numero2);
    printf(" 0x%p %u\n\n\n",&soma, soma);
    return EXIT_SUCCESS;

}
