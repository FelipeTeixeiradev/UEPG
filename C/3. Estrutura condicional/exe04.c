#include <stdio.h>

/*Escreva um Algoritmo para determinar se um dado número N (recebido através
do teclado) é POSITIVO, NEGATIVO ou NULO.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 > 0){
        printf("O número digitado é POSITIVO.");
    } else if(num1 < 0){
        printf("O número digitado é NEGATIVO.");
    } else {
        printf("O número digitado é NULO.");
    }

    return 0;
}