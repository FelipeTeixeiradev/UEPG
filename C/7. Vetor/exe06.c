#include <stdio.h>

/*Faça um programa que receba do usuário um vetor X com 10 posições. Em
seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

int main() {
    int X[10];
    int maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &X[i]);
    }

    maior = menor = X[0];

    for (int i = 1; i < 10; i++) {
        if (X[i] > maior) {
            maior = X[i];
        }
        if (X[i] < menor) {
            menor = X[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}