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
        if(str[i]>=65&&str[i]<=90)
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vogal++;
            else
                consoante++;
        }
        if(str[i]==' ')
            espaco++;
        if(str[i]>=48&&str[i]<=57)
            digito++;
    }
    printf("V: %d\nC: %d\nD: %d\nE: %d\n\n",vogal,consoante,digito,espaco);
    return EXIT_SUCCESS;
}

