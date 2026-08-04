#include <stdio.h>

/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus enderenço e exiba o conteúdo do maior endereço.*/


int main(){

    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(&num1 > &num2){
        printf("O maior endereço é: %p\n", (void*)&num1);
        printf("Conteúdo do maior endereço: %d\n", num1);
    } else {
        printf("O maior endereço é: %p\n", (void*)&num2);
        printf("Conteúdo do maior endereço: %d\n", num2);
    }


}