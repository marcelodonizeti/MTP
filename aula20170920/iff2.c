#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0, num; float a; double b;
    float soma=0, soma2=0;
    printf("Entre com um numero: \n");
    scanf("%d",&num);
    a=1.f/num; b=1./num;
    for( i; i<730;i++)
        {
            soma+=a;
            soma2+=b;
        }
    printf("Soma do tipo float: %15.f", soma);
    printf("\nSoma do tipo double: %15.f", soma2);
    return 0;
}

