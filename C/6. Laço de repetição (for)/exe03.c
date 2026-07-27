#include <stdio.h>

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/

int main() {
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Sai do programa com erro
    }

    printf("Os %d primeiros números naturais ímpares são:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d\n", 2 * i + 1); // Fórmula para gerar números ímpares
    }

    return 0;
}