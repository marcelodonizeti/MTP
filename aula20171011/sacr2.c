#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int dado()
{
    return rand()%6 + 1;
}

int main()
{
    srand(time(0));
    char c;
    int soma=0, numero=0, i=0, j=0;
    do
    {
        system("cls");
        soma=0;
        numero=0;
        i=0;
        printf("Rodada %d", j+1);
        printf("                                       \n\n Sorteio dos 5 dados(pressione ""ENTER""):\n\n");
        scanf("%c", &c);
        for (; i<5; i++)
        {
            numero=dado();
            soma+=numero;
            printf("... %d\n", numero);
        }
        printf("A soma dos numeros: %d\n\n", soma);
        if(soma>17&&soma<24)
        {
            printf("Voce venceu, parabens!!!\n\n");
            break;
        }
        system("pause");
        j++;
        if(j==3)
            break;
    }
    while(soma<18||soma>23);
    if(j==3)
    printf("\n\nNao foi dessa vez, voce perdeu!\n\n\n");
    return EXIT_SUCCESS;
}
