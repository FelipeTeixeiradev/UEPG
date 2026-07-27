#include <stdio.h>

/*Escreva um Algoritmo que leia 200 números inteiros e imprima quantos são pares e
quantos são ímpares.*/

int main(){
    
    int cont = 1;
    int num, pares = 0, impares = 0;

    while (cont <= 200) {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        cont++;
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
    
}