#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256
int main()
{
    char frase [N];
    int i=0, cont=0;
    printf("Entre com uma frase: \n");
    fgets(frase,N,stdin);
   for (i; frase[i];i++)
   {
       if(frase[i]!=' ')
        cont++;
   }
    printf("%d", cont-1);
    return 0;
}

