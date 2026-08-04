#include <stdio.h>

/*Crie uma função recursiva que retorne a média dos elementos de um vetor
de inteiros.*/

float mediaVetor(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0.0; 
    } else {
        return (vetor[tamanho - 1] + mediaVetor(vetor, tamanho - 1) * (tamanho - 1)) / tamanho; 
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    float resultado = mediaVetor(vetor, tamanho);
    printf("A média dos elementos do vetor é: %.2f\n", resultado);

    return 0;
}