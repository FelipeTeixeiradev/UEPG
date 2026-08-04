#include <stdio.h>

/*Elabore um Algoritmo que leia um valor inteiro e chame uma função
que imprima se o valor é par ou ímpar.*/

int verificarParidade(int valor);

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (verificarParidade(valor)) {
        printf("O valor %d é par.\n", valor);
    } else {
        printf("O valor %d é ímpar.\n", valor);
    }

    return 0;
}

int verificarParidade(int valor) {
    return valor % 2 == 0;
}