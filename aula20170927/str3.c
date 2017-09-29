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
    for(i=0; str[i]!='\0'; i++)
    {
        k=0;
        if(str[i]>='A'&&str[i]<='M'||str[i]>=97&&str[i]<=109)
        {
            str[i]+=13;
            k=1;
        }
        if(k==0)
            if(str[i]>109&&str[i]<=122||str[i]>77&&str[i]<=90)
                str[i]-=13;
    }
    printf("\n\n%s\n\n", str);
    return EXIT_SUCCESS;
}



