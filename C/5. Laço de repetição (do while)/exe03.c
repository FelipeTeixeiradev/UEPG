#include <stdio.h>

/*Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos
divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

int main() {
    int numero, soma = 0, divisor = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    do {
        if (numero % divisor == 0) {
            soma += divisor;
        }
        divisor++;
    } while (divisor < numero);

    printf("A soma dos divisores de %d (excluindo ele próprio) é: %d\n", numero, soma);
    return 0;
}