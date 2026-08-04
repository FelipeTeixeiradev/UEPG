#include <stdio.h>

/*Faça um Procedimento em algoritmo que recebe como parâmetro um inteiro
no intervalo de 1 a 9 e mostre a seguinte tabela de multiplicação*/

void tabuada(int n) {
    int i;

    printf("\nTabuada do %d\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int numero;

    printf("Digite um numero entre 1 e 9: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 9) {
        tabuada(numero);
    } else {
        printf("Numero invalido! Digite um valor entre 1 e 9.\n");
    }

    return 0;
}