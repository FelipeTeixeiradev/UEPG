#include <stdio.h>

/*Escreva um Algoritmo que leia um número e informe se ele é divisível por 10, por
5 ou por 2 ou se não é divisível por nenhum deles.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 % 10 == 0){
        printf("O número digitado é divisível por 10.");
    } else if(num1 % 5 == 0){
        printf("O número digitado é divisível por 5.");
    } else if(num1 % 2 == 0){
        printf("O número digitado é divisível por 2.");
    } else {
        printf("O número digitado não é divisível por 10, por 5 ou por 2.");
    }

    return 0;
}