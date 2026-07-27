#include <stdio.h>

/*Escreva um Algoritmo que leia uma temperatura em gruas centígrados e apresente a
temperatura convertida em graus Fahrenheit. A fórmula de conversão é:
F = 9 * C / 5 + 32.
Sendo F é a temperatura em Fahrenheit e C é a temperatura em centígrados*/

int main(){
    
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em graus centígrados: ");
    scanf("%f", &celsius);
    
    fahrenheit = 9 * celsius / 5 + 32;
    
    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);
    
    return 0;
    
}