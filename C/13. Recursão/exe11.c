#include <stdio.h>

/*Escreva uma função recursiva que receba um valor inteiro em base decimal
e o imprima em base binária.*/

void imprimirBinario(int numero) {
    if (numero > 1) {
        imprimirBinario(numero / 2); 
    }
    printf("%d", numero % 2); 
}  

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("O número %d em base binária é: ", numero);
    imprimirBinario(numero);
    printf("\n");

    return 0;
}