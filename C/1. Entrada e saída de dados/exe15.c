#include <stdio.h>

/*Escreva um programa que leia três variáveis: char, int e float. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma
tabulação horizontal e uma em cada linha. Use um único comando printf() para
cada operação de escrita das três variáveis.*/

int main(){

    char caractere;
    int num;
    float decimal;

    printf("Digite um caractere, um número inteiro e um número do tipo float: ");
    scanf("%c %d %f", &caractere, &num, &decimal);
    printf("Valores digitados separados por espaços: %c %d %.2f\n", caractere, num, decimal);
    printf("Valores digitados separados por tabulação horizontal: %c\t%d\t%.2f\n", caractere, num, decimal);
    printf("Valores digitados em linhas separadas:\n%c\n%d\n%.2f\n", caractere, num, decimal);

    return 0;
    
}