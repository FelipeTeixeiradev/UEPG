#include <stdio.h>

/*Faça um programa que leia um valor do tipo double e depois o imprima na
forma de notação científica.*/

int main(){

    double num;

    printf("Digite um número do tipo double: ");
    scanf("%lf", &num);
    printf("Valor lido: %e", num);

    return 0;
    
}