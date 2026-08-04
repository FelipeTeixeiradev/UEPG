#include <stdio.h>

/*Crie um programa que leia do teclado seis valores inteiros e em seguida
mostra na tela os valores lidos.*/

int main() {
    int valores[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}