#include <stdio.h>

/*Crie uma função recursiva que retorne a soma dos elementos de um vetor
de inteiros.*/

int somaVetor(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0; 
    } else {
        return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1); 
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int resultado = somaVetor(vetor, tamanho);
    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0;
}