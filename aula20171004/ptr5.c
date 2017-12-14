#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define n 1000
int main()
{
    srand(time(0));
    int vet[n], i,j=0,k=0;
    unsigned char *bytes;
    int escolha, cont[n]= {0};
    printf("Escolha um numero de 0 a 255:\n");
    scanf("%i", &escolha);
    for(i=0,bytes=(unsigned char*)vet; i<n; i++)
    {

        vet[i]=rand()%(RAND_MAX);
    }

    for(j=0; j<1000; j++,bytes+=4)
    {

        if(*bytes==escolha)
        {

            printf("0x%p : %d\n",bytes,*bytes);
            cont[k]= *bytes;
            k++;
        }
    }
    printf("Esses %d bytes sao iguais a %d e estao localizados entre o endereco 0x%p ate o endereco Ox%p na memoria",k,escolha,cont[0],cont[k-1]);
    return EXIT_SUCCESS;

}
