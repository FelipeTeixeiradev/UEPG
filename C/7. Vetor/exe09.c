#include <stdio.h>

/*Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse
vetor na tela.*/

int main() {
    int vetor[100];
    int count = 0;
    int num = 1; 

    while (count < 100) {
        if (num % 7 != 0) { 
            vetor[count] = num; 
            count++;
        }
        num++; 
    }

    printf("Os 100 primeiros números naturais que não são múltiplos de 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}