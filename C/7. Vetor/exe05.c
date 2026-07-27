#include <stdio.h>

/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva
na tela quantos valores pares foram armazenados nesse vetor.*/

int main() {
    int vetor[10];
    int countPares = 0;

    // Leitura dos valores
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    // Exibição do resultado
    printf("Quantidade de valores pares armazenados: %d\n", countPares);

    return 0;
}