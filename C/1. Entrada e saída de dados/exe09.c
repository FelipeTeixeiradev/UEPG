#include <stdio.h>

/*Faça um programa que leia dois valores do tipo float. Use um único
comando de leitura para isso. Em seguida, imprima os valores lidos na ordem
inversa em que eles foram lidos.*/

int main(){

    float num1, num2;

    printf("Digite dois números do tipo float: ");
    scanf("%f %f", &num1, &num2);
    printf("Os números digitados foram: %.2f e %.2f\n", num2, num1);

    return 0;
    
}