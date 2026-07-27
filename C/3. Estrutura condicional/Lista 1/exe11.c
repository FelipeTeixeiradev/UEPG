#include <stdio.h>

/*Escreva um Algoritmo que leia um número e informe se ele é divisível por 3 e por
7*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 % 3 == 0 && num1 % 7 == 0){
        printf("O número digitado é divisível por 3 e por 7.");
    } else {
        printf("O número digitado não é divisível por 3 e por 7.");
    }

    return 0;
}