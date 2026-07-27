#include <stdio.h>

/*Elabore um programa que leia um caractere e depois o imprima como um
valor inteiro.*/

int main(){

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    printf("Valor lido em inteiro: %d", caractere);

    return 0;
    
}