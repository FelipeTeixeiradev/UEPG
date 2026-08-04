#include <stdio.h>

/*Crie um programa que contenha um procedimento que permita passar por parâmetros
dois números inteiros A e B. O procedimento deverá calcular a soma entre estes dois
números e armazenar o resultado na variável A. Este procedimento não deverá possuir
retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B
na função principal.*/

void soma(int *a, int b);

int main(){
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    soma(&a, b);

    printf("Valor de A após a soma: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}

void soma(int *a, int b) {
    *a += b;
}