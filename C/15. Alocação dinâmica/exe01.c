#include <stdio.h>

/*Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa
na memória: char, int, float, double.*/

int main() {
    printf("Tamanho de char: %zu byte(s)\n", sizeof(char));
    printf("Tamanho de int: %zu byte(s)\n", sizeof(int));
    printf("Tamanho de float: %zu byte(s)\n", sizeof(float));
    printf("Tamanho de double: %zu byte(s)\n", sizeof(double));

    return 0;
}