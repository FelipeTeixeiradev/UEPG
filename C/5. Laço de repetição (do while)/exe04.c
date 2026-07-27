#include <stdio.h>

/*Escreva um programa que leia um número inteiro positivo N e em seguida
imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

int main() {
    int N, numero = 1, linha = 1;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    do {
        int coluna = 1;
        do {
            printf("%d ", numero);
            numero++;
            coluna++;
        } while (coluna <= linha);
        printf("\n");
        linha++;
    } while (linha <= N);

    return 0;
}