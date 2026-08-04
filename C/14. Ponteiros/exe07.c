#include <stdio.h>

/*Crie uma função que receba dois parâmetros: um vetor e um valor
do mesmo tipo do vetor. A função deverá preencher os elementos de vetor com
esse valor. Não utilize índices para percorrer o vetor, apenas aritmética de
ponteiros.*/

const int TAMANHO_VETOR = 10;

void preencher_vetor(int *vetor, int valor, int tamanho);

int main() {
    int vetor[TAMANHO_VETOR];
    int valor;

    printf("Digite um valor para preencher o vetor: ");
    scanf("%d", &valor);

    preencher_vetor(vetor, valor, TAMANHO_VETOR);

    printf("Vetor preenchido: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

void preencher_vetor(int *vetor, int valor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(vetor + i) = valor;
    }
}

