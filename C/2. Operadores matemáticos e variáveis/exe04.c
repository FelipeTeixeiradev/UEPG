#include <stdio.h>

/*Criar um Algoritmo para calcular e apresentar o valor do volume de
uma lata de óleo, utilizando a fórmula:
V = π * R² * h.
sendo V é o volume, R é o raio e h é a altura.*/

int main(){
    
    float raio, altura, volume;
    const float pi = 3.14159;
    
    printf("Digite o valor do raio da lata de óleo: ");
    scanf("%f", &raio);
    
    printf("Digite o valor da altura da lata de óleo: ");
    scanf("%f", &altura);
    
    volume = pi * raio * raio * altura;
    
    printf("O volume da lata de óleo é: %.2f\n", volume);
    
    return 0;
    
}