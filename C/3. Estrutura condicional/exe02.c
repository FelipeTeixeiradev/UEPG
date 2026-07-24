#include <stdio.h>

/*Construa um Algoritmo que leia dois valores numéricos inteiros e efetue a adição;
caso o resultado seja maior que 10, apresentá-lo.*/

int main(){

    int num1, num2, soma;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if(soma > 10){
        printf("A soma dos números digitados é: %d", soma);
    }

    return 0;
}