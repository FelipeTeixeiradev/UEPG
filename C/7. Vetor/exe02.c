#include <stdio.h>

/*Crie um programa que leia do teclado seis valores inteiros e em seguida
mostre na tela os valores lidos na ordem inversa.*/

int main() {
    int valores[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}

