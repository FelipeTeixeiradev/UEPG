#include <stdio.h>

/*Escreva um Algoritmo que receba 15 números e imprima quantos números maiores
que 30 foram digitados.*/

int main(){
    
    int cont = 1;
    int num, maior30 = 0;

    while (cont <= 15) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > 30) {
            maior30++;
        }
        cont++;
    }

    printf("Quantidade de números maiores que 30: %d\n", maior30);

    return 0;
    
}