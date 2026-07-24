#include <stdio.h>

/*Escreva um Algoritmo que leia um número e o imprima caso ele seja maior que
20.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 > 20){
        printf("O número digitado é: %d", num1);
    }

    return 0;
}