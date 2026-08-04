#include <stdio.h>

/*Escreva uma função recursiva que receba um número inteiro positivo n.
Calcule e retorne o seu fatorial n!:
n! = n * (n – 1) * (n – 2) * ... * 1*/

int fatorial(int n) {
    if (n <= 1) {
        return 1; 
    } else {
        return n * fatorial(n - 1); 
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        int resultado = fatorial(n);
        printf("O fatorial de %d é: %d\n", n, resultado);
    }

    return 0;
}

