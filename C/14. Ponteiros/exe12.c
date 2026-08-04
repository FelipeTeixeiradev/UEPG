#include <stdio.h>

/*Crie um programa que contenha um array de inteiros contendo cinco
elementos. Utilizando apenas aritmética de ponteiros, leia esse array do
teclado e imprima o dobro de cada valor lido.*/

int main() {
    int array[5];

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", array + i);
    }

    printf("Dobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(array + i) * 2);
    }
    printf("\n");

    return 0;
}