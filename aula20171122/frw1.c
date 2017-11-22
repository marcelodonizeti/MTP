#include <stdio.h>
#include <stdlib.h>
#define N 100
int menu ()
{
    int opc;
    do
    {
        printf("================\n");
        fprintf(stdout," 1-Informar\n");
        fprintf(stdout," 2-Resgatar\n");
        fprintf(stdout," 3-Sair\n");
        fscanf(stdin,"%d",&opc);
    }
    while(opc!=1&&opc!=2&&opc!=3);
    return opc;
}
void informar()
{
    FILE * arquivo;
    char nome[N];
    int idade;
    float altura;
    printf("Entre com o primeiro nome: ");
    scanf("%s", &nome);
    printf("Entre com a idade (somente em anos): ");
    scanf("%d", &idade);
    printf("Entre com a altura (metros): ");
    scanf("%f", &altura);
    arquivo=fopen("info.txt","w");
    fprintf(arquivo,"%s\n%d\n%f\n", nome, idade, altura);
    fclose(arquivo);
}
void resgatar()
{
    FILE * arquivo;
    char nome[N];
    int idade; float altura;
    arquivo=fopen("info.txt","r");
    fscanf(arquivo, "%s\n%d\t%f\n,", &nome, &idade, &altura);
    fclose(arquivo);
    fprintf(stdout,"%s\n%d anos\n%g metros\n", nome, idade, altura);

}
int main()
{
    int opc;
    do
    {
        printf("\n");
        opc=menu();
        if (opc==1) informar();
        if(opc==2) resgatar();
    }
    while (opc!=3);
    return EXIT_SUCCESS;
}
