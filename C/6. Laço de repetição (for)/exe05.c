#include <stdio.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int main() {
    int soma = 0;

    for (int i = 1; i <= 50; i++) {
        soma += 2 * i; // Soma dos números pares
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}