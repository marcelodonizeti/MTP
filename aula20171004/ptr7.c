#include <stdlib.h>
#include<stdio.h>

int main()
{
    int vet[4]= {0},i,j,let;
    char *ptr;
    for(i=0,ptr=(char*)vet; i<4; i++)
    {
        printf("Entre com o %d termo do vetor: ", i+1);
        scanf("%d", &vet[i]);
        getchar();
    }
    printf("\n\nSaida: %s\n\n",ptr);
    return EXIT_SUCCESS;
}
