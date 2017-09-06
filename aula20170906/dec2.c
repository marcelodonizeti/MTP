#include <stdio.h>
int main()
{
    srand(time(0));
    int divisor, pontos=0, soma, produto;
    int menor=1328, maior=1360;
    int y = 1328+ rand()%(1360-1328+1);
    int menor1=0, maior2=99;
    int x = 0+ rand()%(99-0+1);
    printf("Informe um divisor de 8192: ");
    scanf("%d",&divisor);getchar();
    if(8192%divisor!=0){
          printf("\nErrado, pontos= %d", pontos);
    }
    else
        {
            pontos++;
            printf("Certo, Pontos = %d",pontos);
                    }
    printf("\nSome 101 a: %d",y);
    printf("\n");
    scanf("%d",&soma);getchar();
    if (soma==y+101)
    {
        pontos++;
        printf("Correto, pontuacao: %d", pontos );
    }
    else
    {
        printf("Errado, pontuacao: %d", pontos);
    }
    printf("\nMultiplique por 3 o numero: %d", x);
    printf("\n");
    scanf("%d", &produto);
    if(produto==3*x)
    {
        pontos++;
        printf("Correto. Pontuacao= %d", pontos);
    }
    else
        printf("Errado. Pontuacao= %d", pontos);

    return 0;
}
