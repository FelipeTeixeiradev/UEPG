#include <stdio.h>

/*Faça um programa que receba um número inteiro maior do que 1 e verifique se o
número fornecido é primo ou não.*/

int main(){
    
    int numero, ehPrimo = 1; 

    printf("Digite um número inteiro maior do que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Por favor, digite um número inteiro maior do que 1.\n");
        return 1; 
    }

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            ehPrimo = 0; 
            break;
        }
    }

    if (ehPrimo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}