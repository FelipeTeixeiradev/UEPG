#include <stdio.h>

/*Criar um Algoritmo que leia o numerador e o denominador de uma fração e transforme
esses valores em um número racional.*/

int main(){
    
    float numerador, denominador, numero_racional;
    
    printf("Digite o numerador da fração: ");
    scanf("%f", &numerador);
    
    printf("Digite o denominador da fração: ");
    scanf("%f", &denominador);
    
    if(denominador == 0){
        printf("Erro: O denominador não pode ser zero.\n");
    } else {
        numero_racional = numerador / denominador;
        printf("O número racional é: %.2f\n", numero_racional);
    }
    
    return 0;
    
}