#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256
void troca(char * str)
{
    if(*str)
    {
        troca(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char str[N];
    printf ("Entre com uma frase: ");
    fgets(str,N,stdin);
    str[strlen(str)-1]='\0';
    troca(str);
    return EXIT_SUCCESS;
}
