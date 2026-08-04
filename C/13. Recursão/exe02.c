#include <stdio.h>

/*Crie uma função recursiva que receba um número inteiro N e imprima todos
os números naturais de 0 até N em ordem crescente.*/

void imprimirNaturais(int N) {
    if (N < 0) {
        return; 
    } else {
        imprimirNaturais(N - 1); 
        printf("%d ", N); 
    }
}

int main() {
    int N;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    printf("Números naturais de 0 até %d: ", N);
    imprimirNaturais(N);

    printf("\n");
    return 0;
}
