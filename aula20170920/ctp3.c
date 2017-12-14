#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256
int main()
{
    char frase[N];
    int i, m=0;
    printf("entre com a frase: \n");
    fgets(frase,N,stdin);
    for(i=0; frase[i]; i++)
        if(isalpha(frase[i]))
            m++;
    printf("%i", m);
    return EXIT_SUCCESS;
}
