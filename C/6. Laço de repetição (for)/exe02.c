#include <stdio.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/

int main(){
    
    int N;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Sai do programa com erro
    }

    for (int i = N; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}