#include <stdio.h>
int conv(char* str)
{
int i=0;
int x=0;
while(str[i]) 
{x=x*10+ str[i]-48; 
i++;
}
return x;
}

int main(int argc, char** argv)
{
if (argc>=3)
{
printf("Soma=%d\n",conv(argv[1])+conv(argv[2]));
}
else
printf("Faltam argumentos!\n");
return 0;
}