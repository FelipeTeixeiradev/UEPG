#include <stdio.h>

/*Faça um programa que leia cinco valores e os armazene em um vetor. Em
seguida, mostre todos os valores lidos juntamente com a média dos valores.*/

int main() {
    int valores[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; 
    }

    float media = soma / 5.0;

    printf("Valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMédia dos valores: %.2f\n", media);

    return 0;
}