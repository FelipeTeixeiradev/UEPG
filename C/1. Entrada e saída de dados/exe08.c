#include <stdio.h>

/*Faça um programa que leia dois números inteiros e depois os imprima na
ordem inversa em que eles foram lidos.*/

int main(){

    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Os números digitados foram: %d e %d\n", num2, num1);

    return 0;
    
}