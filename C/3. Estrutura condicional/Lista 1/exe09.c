#include <stdio.h>

/*Escreva um Algoritmo que receba um número e imprima uma das mensagens: “é
múltiplo de 3” ou “não é múltiplo de 3”.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 % 3 == 0){
        printf("O número digitado é múltiplo de 3.");
    } else {
        printf("O número digitado não é múltiplo de 3.");
    }

    return 0;
}

