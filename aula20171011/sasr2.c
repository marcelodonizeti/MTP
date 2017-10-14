#include <stdio.h>
#include <stdlib.h>

void impares()
{
    int i=1;
    for( ; i<=20; i++)
        if(i%2==1)
            printf("%d ",i);
}
void pares()
{
    int j=1;
    for (; j<=20; j++)
        if(j%2==0)
            printf("%d ",j);
}
int main()
{
    int i=1, op=0;
    printf("          Os numeros de 1 a 20\n\n");
    for(; i<=20; i++)
        printf("%d ",i);
    printf("\n\nPara ver numeros impares digite 1, para ver pares 2: ");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        impares();
        break;
    case 2:
        pares();
        break;
    default:
        printf("\nOpcao invalida!!\n");
        break;
    }
    printf("\n\n\n");
    return EXIT_SUCCESS;
}

