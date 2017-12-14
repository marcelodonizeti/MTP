#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int divisor, cont=0, tes=0, nois=0, w=0, k=0;
    printf("Entre com um dos divisores de 8192: ");
    scanf("%d", & divisor);
    if(8192%divisor == 0)
    {
        printf("Certo!\n");
        cont ++;
    }
    srand(time(0));
    int x = rand()%100;
    int menor=1328, maior=1360;
    int y= menor + rand()%(maior-menor+1);
    printf("Numero sorteado entre 1328 e 1360: %d\n", y);
    printf("Digite a soma do numero sorteado por 101: ");
    scanf("%d", & tes);
    k=y+101;
    if(tes == k)
        cont++;
    printf("Numero sorteado entre 0 e 99: %d\n", x);
    printf("Digite o produto do numero sorteado por 3: ");
    scanf("%d", & nois);
    w=x*3;
    if (nois== w)
        cont++;
    printf("pontuacao: %d\n", cont);
    return 0;
}
