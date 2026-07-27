#include <stdio.h>

/*Faça um programa que leia cinco valores e os armazene em um vetor. Em
seguida, mostre todos os valores lidos juntamente com a média dos valores.*/

int main() {
    int valores[5];
    int soma = 0;

    // Leitura dos valores
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; // Acumula a soma dos valores
    }

    // Cálculo da média
    float media = soma / 5.0;

    // Exibição dos valores lidos e da média
    printf("Valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMédia dos valores: %.2f\n", media);

    return 0;
}