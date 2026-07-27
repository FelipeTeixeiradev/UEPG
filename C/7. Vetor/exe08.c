#include <stdio.h>

/*Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na
tela os dados do array C.*/

int main() {
    int A[10], B[10], C[10];

    // Leitura dos valores para os arrays A e B
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d para o array A: ", i + 1);
        scanf("%d", &A[i]);
        printf("Digite o valor %d para o array B: ", i + 1);
        scanf("%d", &B[i]);
    }

    // Cálculo do array C = A - B
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    // Exibição dos valores do array C
    printf("Valores do array C (A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}