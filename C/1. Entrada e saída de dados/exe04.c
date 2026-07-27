#include <stdio.h>

/*Faça um programa que leia um número inteiro e depois o imprima usando o
operador “%f”. Veja o que aconteceu.*/

int main(){

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("Valor lido: %f", num);

    return 0;

}