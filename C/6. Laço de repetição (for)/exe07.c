#include <stdio.h>

/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

int main(){
    
    int N, numero = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Sai do programa com erro
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}