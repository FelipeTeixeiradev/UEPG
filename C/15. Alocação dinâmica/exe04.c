#include <stdio.h>

/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a
alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.*/

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho invalido. O valor deve ser positivo.\n");
        return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor); 

    return 0;
}