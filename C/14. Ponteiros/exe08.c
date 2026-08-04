#include <stdio.h>

/*Crie uma função que receba como parâmetro um vetor e o imprima.
Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

void imprimir_vetor(int *vetor, int tamanho);

int main() {
    const int TAMANHO_VETOR = 5;
    int vetor[TAMANHO_VETOR];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor digitado: ");
    imprimir_vetor(vetor, TAMANHO_VETOR);
    printf("\n");

    return 0;
}

void imprimir_vetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i));
    }
}