#include <stdio.h>

/*Escreva uma função recursiva que receba por parâmetro dois valores
inteiros x e y e calcule e retorne o resultado de xy para o programa
principal.*/

int potencia(int x, int y) {
    if (y == 0) {
        return 1; 
    } else {
        return x * potencia(x, y - 1); 
    }
}

int main() {
    int x, y;

    printf("Digite a base (x): ");
    scanf("%d", &x);

    printf("Digite o expoente (y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("Por favor, insira um expoente inteiro não negativo.\n");
    } else {
        int resultado = potencia(x, y);
        printf("%d elevado a %d é: %d\n", x, y, resultado);
    }

    return 0;
}