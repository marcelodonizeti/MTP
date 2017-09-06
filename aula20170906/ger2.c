#include <stdio.h>
int main()
{
    int num, i, soma=0;
    printf("Digite um numero: ");
    scanf("%d",&num);getchar();
    for(i=1;i<num;i++)
        if(num%i==0)
            soma=soma+i;
    if(soma==num)
        printf("\nNumero perfeito!");
    else
        printf("\nO numero nao e' perfeito!");
    return 0;
}
