#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int  d1,d2,d3,soma, cont=0,l, aux, total=0;
    do
    {
        srand(time(0));
        if(cont>0)
        printf("\n\n");
        printf("RODADA %d",cont+1);
        printf(": ");
        printf("\n\nLimite: ");
        scanf("%d",& l);
        int menor=1, maior=6;
        int p=1, g=6;
        int menor2=1, maior2=6;
        int d1=menor + rand()%(maior-menor);
        int d2=p + rand()%(g-p);
        int d3= menor2 + rand()%(maior2-menor2);
        soma=d1+d2+d3;
        printf("\nDado 1: %d", d1);
        printf("\nDado 2: %d", d2);
        printf("\nDado 3: %d", d3);
        printf("\nSoma: %d", soma);
        if (l<=11)
            total=total+(11-soma);
        else
        {
            if(soma<l)
                total=total+((l-soma)/(l-10))+1;
            if(soma>l)
                total=total-(soma-l)*(l-10);
        }
        cont++;
    }
    while(3>cont);
    printf("\n\nPontuacao final: %d", total);
    printf("\n\n\n\n\n");
	return 0;
}
