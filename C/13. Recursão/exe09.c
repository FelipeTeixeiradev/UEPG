#include <stdio.h>

/*Escreva uma função recursiva que receba um número inteiro, maior ou igual
a zero, e retorne o enésimo termo da sequência de Fibonacci. Essa
sequência começa no termo de ordem zero e, a partir do segundo termo,
seu valor é dado pela soma dos dois termos anteriores. Alguns termos
dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
    int n;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número inteiro maior ou igual a zero.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}
