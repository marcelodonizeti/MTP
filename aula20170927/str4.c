#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 256
int main()
{
    int i;
    char str[N],vogal=0,consoante=0,digito=0,espaco=0;
    printf("Entre com uma frase: \n");
    fgets(str,N,stdin);
    str[strlen(str)-1]='\0';
    for(i=0; i<N; i++) str[i]= toupper(str[i]);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='A')
            str[i]=52;
        if(str[i]=='E')
            str[i]=51;
        if(str[i]=='I')
            str[i]=49;
        if(str[i]=='O')
            str[i]=48;
        if(str[i]=='S')
            str[i]=53;
        if(str[i]=='G')
            str[i]=54;
    }
    printf("\n\n%s\n\n", str);
    return EXIT_SUCCESS;
}
