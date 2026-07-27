#include <stdio.h>

/*Escreva um Algoritmo que receba dez números do usuário e imprima a metade de
cada número.*/

int main(){
    
    int cont = 1;
    float num1;

    while (cont <= 10) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        printf("A metade do número digitado é: %.2f\n", num1 / 2);
        cont++;
    }

    return 0;
}