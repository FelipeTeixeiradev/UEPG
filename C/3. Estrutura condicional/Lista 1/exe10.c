#include <stdio.h>

/*Escreva um Algoritmo que leia um número e informe se ele é ou não divisível por
5*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 % 5 == 0){
        printf("O número digitado é divisível por 5.");
    } else {
        printf("O número digitado não é divisível por 5.");
    }

    return 0;
}

