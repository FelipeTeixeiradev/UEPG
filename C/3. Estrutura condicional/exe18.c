#include <stdio.h>

/*Construir um Algoritmo que leia um número e imprima se ele é igual a 5, a 200, a
400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora dos
escopos anteriores.*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 == 5){
        printf("O número digitado é igual a 5.");
    } else if(num1 == 200){
        printf("O número digitado é igual a 200.");
    } else if(num1 == 400){
        printf("O número digitado é igual a 400.");
    } else if(num1 >= 500 && num1 <= 1000){
        printf("O número digitado está no intervalo entre 500 e 1000, inclusive.");
    } else {
        printf("O número digitado está fora dos escopos anteriores.");
    }

    return 0;

}
