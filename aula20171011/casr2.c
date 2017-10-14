#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    int colunas=0, linhas=0, a=0, i=0, j=0;
    char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
    printf("Digite o numero de linhas e colunas (linhas,colunas): ");
    scanf("%d,%d", &linhas, &colunas); getchar();
    for(i=0;i<linhas;i++)
    {
        printf("\n");
        for(j=0;j<colunas;j++)
        {
            a=rand()%38;
            printf("%c", caracteres[a]);
        }
    }
    printf("\n\n\n\n\n\n");
    return EXIT_SUCCESS;
}
