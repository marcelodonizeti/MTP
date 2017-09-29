#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 256
int main()
{
    int i,k=0;
    char str[N]= {0};
    printf("Entre com uma frase: \n");
    fgets(str,N,stdin);
    str[strlen(str)-1]='\0';
    for(i=0; i<N; i++) str[i]= toupper(str[i]);
    for(i=0; str[i]!='\0'; i++)
    {
        k=str[i];
        if(str[i]>=65&&str[i]<=77||str[i]>='a'&&str[i]<=103)
            str[i]=str[i]+13;
        if(str[i]>=78&&str[i]<=90||str[i]>=104&&str[i]<=122)
            str[i]=str[i]-13;
        // if(str[i]>='a'&&str[i]<='h')
        //str[i]=str[i]+13;
        // if(str[i]>104&&str[i]<=122)
        // str[i]-=13;
    }
    printf("\n\n%s\n\n", str);
    return EXIT_SUCCESS;
}



