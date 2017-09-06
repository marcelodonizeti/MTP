#include<stdio.h>
#include <time.h>
int main()
{

    srand(time(0));
    int x = rand()%100;
    int menor=101, maior=293;
    int y = 101+ rand()%(293-101+1); menor + (maior-menor);
    printf("Entre 0 e 99: %d\n",x);
    printf("Entre 101 e 293: %d\n",y);
    return 0;

}
