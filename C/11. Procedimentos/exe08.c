#include <stdio.h>

/*Elabore um procedimento que receba como parâmetro um valor inteiro n e
gere como saída um triângulo lateral formado por asteriscos conforme o
exemplo a seguir, em que usamos n = 2
*
**
**/

void imprimirTriangulo(int n);

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    imprimirTriangulo(n);

    return 0;
}

void imprimirTriangulo(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}