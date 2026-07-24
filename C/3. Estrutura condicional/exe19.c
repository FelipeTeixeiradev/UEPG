#include <stdio.h>

/*Criar um Algoritmo que leia dois números e imprimir o quadrado do menor
número e raiz quadrada do maior número, se for possível.*/

int main(){

    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("O quadrado do menor número (%d) é: %d\n", num1, num1 * num1);
        if(num2 >= 0){
            printf("A raiz quadrada do maior número (%d) é: %.2f", num2, sqrt(num2));
        } else {
            printf("Não é possível calcular a raiz quadrada de um número negativo (%d).", num2);
        }
    } else if(num1 > num2){
        printf("O quadrado do menor número (%d) é: %d\n", num2, num2 * num2);
        if(num1 >= 0){
            printf("A raiz quadrada do maior número (%d) é: %.2f", num1, sqrt(num1));
        } else {
            printf("Não é possível calcular a raiz quadrada de um número negativo (%d).", num1);
        }
    } else {
        printf("Os números digitados são iguais. O quadrado de %d é: %d\n", num1, num1 * num1);
        if(num1 >= 0){
            printf("A raiz quadrada de %d é: %.2f", num1, sqrt(num1));
        } else {
            printf("Não é possível calcular a raiz quadrada de um número negativo (%d).", num1);
        }
    }

    return 0;
}