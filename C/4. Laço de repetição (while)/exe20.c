#include <stdio.h>

/*Criar um Algoritmo que leia dez números inteiros e imprima o maior e o menor
número da lista.*/

int main(){

    int cont = 1;
    int num1, maior, menor;

    printf("Digite um número: ");
    scanf("%d", &num1);
    maior = num1;
    menor = num1;

    while (cont < 10) {
        printf("Digite um número: ");
        scanf("%d", &num1);
        if (num1 > maior) {
            maior = num1;
        }
        if (num1 < menor) {
            menor = num1;
        }
        cont++;
    }

    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d\n", menor);

    return 0;
}