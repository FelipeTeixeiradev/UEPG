#include <stdio.h>

/*Escreva um Algoritmo para determinar se um dado número N (recebido através
do teclado) é POSITIVO, NEGATIVO ou NULO.*/

int main(){

    float num1;
    
    printf("Digite um número: ");
    scanf("%f", &num1);

    if(num1 > 0){
        printf("O número digitado é POSITIVO.");
    } else if(num1 < 0){
        printf("O número digitado é NEGATIVO.");
    } else {
        printf("O número digitado é NULO.");
    }

    return 0;
}