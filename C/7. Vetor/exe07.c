#include <stdio.h>

/*Faça um programa que preencha um vetor com 10 números reais. Em
seguida, calcule e mostre na tela a quantidade de números negativos e a soma
dos números positivos desse vetor.*/

int main() {
    float vetor[10];
    int countNegativos = 0;
    float somaPositivos = 0.0;

    // Leitura dos valores
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        if (vetor[i] < 0) {
            countNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    // Exibição do resultado
    printf("Quantidade de números negativos: %d\n", countNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}