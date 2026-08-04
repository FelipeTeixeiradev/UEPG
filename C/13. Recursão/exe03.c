#include <stdio.h>

/*Crie uma função recursiva que receba um número inteiro N e imprima todos
os números naturais de 0 até N em ordem decrescente.*/

void imprimirNaturaisDecrescente(int N) {
    if (N < 0) {
        return; 
    } else {
        printf("%d ", N); 
        imprimirNaturaisDecrescente(N - 1); 
    }
}

int main() {
    int N;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    printf("Números naturais de %d até 0: ", N);
    imprimirNaturaisDecrescente(N);

    printf("\n");
    return 0;
}
