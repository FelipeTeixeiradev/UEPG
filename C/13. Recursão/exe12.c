#include <stdio.h>

/*Faça uma função recursiva que calcule o valor da série S descrita a seguir
para um valor n maior do que zero a ser fornecido como parâmetro para a
mesma:
S = 2 + 5/2 + 10/3 + ... + 1 + n * n / n*/

double calcularSerie(int n) {
    if (n <= 0) {
        return 0.0; 
    } else {
        return (n * n) / (double)n + calcularSerie(n - 1); 
    }
}

int main() {
    int n;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número inteiro maior que zero.\n");
    } else {
        double resultado = calcularSerie(n);
        printf("O valor da série S para n = %d é: %.2f\n", n, resultado);
    }

    return 0;
}