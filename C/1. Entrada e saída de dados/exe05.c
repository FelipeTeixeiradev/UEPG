#include <stdio.h>

/*Faça um programa que leia um valor do tipo float e depois o imprima usando
o operador “%d”. Veja o que aconteceu.*/

int main(){
    
    float num;

    printf("Digite um número do tipo float: ");
    scanf("%f", &num);
    printf("Valor lido: %d", num);

    return  0;
    
}