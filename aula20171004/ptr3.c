#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[]= {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    unsigned char * ponteiro; // ponteiro para byte
    int i, cont=0;
    int nbytes=sizeof(vetor);
    printf("End. inical de vetor: %p\n", vetor);
    for(i=0, ponteiro=(unsigned char *) vetor ; i<nbytes; i++)
    {
        if(ponteiro[i]/*(*ponteiro+i!=0x00)*/) cont++;
        printf("End.: %p, dado: %d, %X\n",ponteiro+i,ponteiro [i], *(ponteiro+i));
    }
    printf("De %d bytes, %d estao com !0x00.\n", nbytes, cont);
    return 0;
}


