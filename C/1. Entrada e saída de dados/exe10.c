#include <stdio.h>

/*Elabore um programa que solicite ao usuário entrar com o valor do dia, mês
e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra
(\).*/

int main(){

    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Data digitada: %d\\%d\\%d\n", dia, mes, ano);

    return 0;
    
}