#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>
int main()
{
    char * str;
    int i=0;
    str=(char*)calloc(1,sizeof(int));
    printf("Entre com uma frase:\n");
    while(!0)
    {
        scanf("%c", str+i);
        str=(char*)realloc(str, sizeof(char)*1);
        if(*(str+i)== 10)
            break;
        i++;
    }
    *(str+i)='\0';
    while(i>=0)
    {
        *(str+i)= toupper(*(str+i));
        i--;
    }

    printf("Frase salva na memoria (maiuscula): %s\n\n",str);
    free(str);
    return EXIT_SUCCESS;
}
