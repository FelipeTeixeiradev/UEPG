#include <stdio.h>

/*Construa um Algoritmo que determine (imprima) se um dado número N inteiro
(recebido através do teclado) é PAR ou ÍMPAR.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0){
        printf("O número digitado é PAR.");
    } else {
        printf("O número digitado é ÍMPAR.");
    }

    return 0;
}
