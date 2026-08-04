#include <stdio.h>

/*Crie um programa que contenha um array contendo cinco elementos
inteiros. Leia esse array do teclado e imprima o endereço das posições
contendo valores pares*/

int main() {
    int array[5];

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Endereços das posições contendo valores pares:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("Valor: %d, Endereço: %p\n", array[i], (void*)&array[i]);
        }
    }

    return 0;
}