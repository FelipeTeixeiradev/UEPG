#include <stdio.h>

/*Faça um programa que leia um caractere do tipo char e depois o imprima
entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser
impresso “A”.*/

int main(){

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    printf("O caractere digitado foi: \"%c\"\n", caractere);

    return 0;
    
}