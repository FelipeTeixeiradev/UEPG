#include <stdio.h>

/*Elabore um Algoritmo que leia um valor inteiro e chame um procedimento
que imprima se o valor é par ou ímpar use protótipo no início do programa.*/

void verificarParidade(int valor);

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    verificarParidade(valor);

    return 0;
}

void verificarParidade(int valor) {
    if (valor % 2 == 0) {
        printf("O valor %d é par.\n", valor);
    } else {
        printf("O valor %d é ímpar.\n", valor);
    }
}

