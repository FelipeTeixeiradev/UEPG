#include <stdio.h>

/*Faça um programa que leia três caracteres do tipo char e depois os
imprima um em cada linha. Use um único comando printf() para isso.*/

int main(){

    char caractere1, caractere2, caractere3;

    printf("Digite três caracteres: ");
    scanf("%c %c %c", &caractere1, &caractere2, &caractere3);
    printf("Os caracteres digitados foram:\n%c\n%c\n%c\n", caractere1, caractere2, caractere3);

    return 0;
    
}