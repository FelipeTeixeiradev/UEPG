#include <stdio.h>

/*Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse
vetor na tela.*/

int main() {
    int vetor[100];
    int count = 0;
    int num = 1; // Começa a verificar a partir do número 1

    while (count < 100) {
        if (num % 7 != 0) { // Verifica se o número não é múltiplo de 7
            vetor[count] = num; // Armazena o número no vetor
            count++;
        }
        num++; // Incrementa para verificar o próximo número
    }

    // Exibição do vetor
    printf("Os 100 primeiros números naturais que não são múltiplos de 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}