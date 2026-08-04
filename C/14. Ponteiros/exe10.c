#include <stdio.h>

/*Crie um programa que contenha um array de float contendo 10
elementos. Imprima o endereço de cada posição desse array.*/

int main() {
    float array[10];

    printf("Endereços do array de float:\n");
    for (int i = 0; i < 10; i++) {
        printf("Endereço do elemento %d: %p\n", i, (void*)&array[i]);
    }

    return 0;
}