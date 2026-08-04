#include <stdio.h>

/*Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o
usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V
contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor
deverá ser alocado dinamicamente.*/

int main() {
    int N;

    do {
        printf("Digite um valor inteiro N (não negativo): ");
        scanf("%d", &N);
        if (N < 0) {
            printf("Valor inválido. Digite um valor não negativo.\n");
        }
    } while (N < 0);

    int *V = (int *)malloc(N * sizeof(int));
    if (V == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o valor para a posição %d (maior ou igual a 2): ", i);
            scanf("%d", &V[i]);
            if (V[i] < 2) {
                printf("Valor inválido. Digite um valor maior ou igual a 2.\n");
            }
        } while (V[i] < 2);
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    free(V); 

    return 0;
}