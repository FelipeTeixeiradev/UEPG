#include <stdio.h>

/*Escreva um Algoritmo para determinar se um número A é divisível por outro
número B. Esses valores devem ser fornecidos pelo usuário.*/
 
int main(){

    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num2 != 0){
        if(num1 % num2 == 0){
            printf("O número %d é divisível por %d.", num1, num2);
        } else {
            printf("O número %d não é divisível por %d.", num1, num2);
        }
    } else {
        printf("Divisão por zero não é permitida.");
    }

    return 0;
}