#include<stdio.h>
int main()
{
    int base, expoente, potencia=1, i=0;
    printf("Digite o valor da base: ");
    scanf("%d",&base);getchar();
    printf("\nDigite o valor do expoente:");
    scanf("%d",&expoente);getchar();
    while (i<expoente)
    {
        potencia=potencia*base;
        i++;
    }
    printf("Potencia: %d", potencia);
    return 0;
}
