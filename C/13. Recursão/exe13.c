#include <stdio.h>

/*Crie uma função recursiva que retorne o menor elemento em um vetor.*/

int menorElemento(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0]; 
    } else {
        int menorRestante = menorElemento(vetor, tamanho - 1); 
        return (vetor[tamanho - 1] < menorRestante) ? vetor[tamanho - 1] : menorRestante; 
    }
}

int main() {
    int vetor[] = {5, 2, 9, 1, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int resultado = menorElemento(vetor, tamanho);
    printf("O menor elemento do vetor é: %d\n", resultado);

    return 0;
}