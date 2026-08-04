#include <stdio.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int main() {
    int soma = 0;
    int contador = 0;
    int numero = 0;

    do {
        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }
        numero++;
    } while (contador < 50);

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);
    return 0;
}