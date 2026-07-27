#include <stdio.h>

/*Construa um Algoritmo que imprima qual o menor e qual o maior valor de dois
números A e B, lidos através do teclado.*/

int main(){

    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O maior número digitado é: %d\n", num1);
        printf("O menor número digitado é: %d", num2);
    } else if(num1 < num2){
        printf("O maior número digitado é: %d\n", num2);
        printf("O menor número digitado é: %d", num1);
    } else {
        printf("Os números digitados são iguais.");
    }

    return 0;
}