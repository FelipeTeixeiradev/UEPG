#include <stdio.h>

/*Escreva um Algoritmo que receba oito números do usuário e imprima o logaritmo de
cada um deles na base 10.*/

int main(){

    int cont = 1;
    float num1;

    while (cont <= 8) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        printf("O logaritmo do número digitado na base 10 é: %.2f\n", log10(num1));
        cont++;
    }

    return 0;
    
}