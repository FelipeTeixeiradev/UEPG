#include <stdio.h>

/*Crie uma função recursiva que receba um número inteiro N e retorne o
somatório dos números de 1 a N.*/

int somatorio(int N) {
    if (N <= 0) {
        return 0; 
    } else {
        return N + somatorio(N - 1); 
    }
}

int main() {
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        int resultado = somatorio(N);
        printf("O somatório de 1 a %d é: %d\n", N, resultado);
    }

    return 0;
}