#include <stdio.h>

/*Escreva um Algoritmo que leia um número e imprima a raiz quadrada do número
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja
negativo.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 >= 0){
        printf("A raiz quadrada do número digitado é: %.2f", sqrt(num1));
    } else {
        printf("O quadrado do número digitado é: %d", num1 * num1);
    }

    return 0;
}

