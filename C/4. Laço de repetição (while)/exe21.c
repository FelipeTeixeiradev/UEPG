#include <stdio.h>

/*Criar um Algoritmo que leia dez números inteiros e imprima o maior e o segundo
maior número da lista.*/

int main(){

    int cont = 1;
    int num1, maior, segundo_maior;

    printf("Digite um número: ");
    scanf("%d", &num1);
    maior = num1;
    segundo_maior = num1;

    while (cont < 10) {
        printf("Digite um número: ");
        scanf("%d", &num1);
        if (num1 > maior) {
            segundo_maior = maior;
            maior = num1;
        } else if (num1 > segundo_maior && num1 != maior) {
            segundo_maior = num1;
        }
        cont++;
    }

    printf("O maior número digitado é: %d\n", maior);
    printf("O segundo maior número digitado é: %d\n", segundo_maior);

    return 0;

}