#include <stdio.h>

/*Elabore um procedimento que receba como parâmetro um valor inteiro n e
gere como saída um triângulo lateral formado por asteriscos conforme o
exemplo a seguir, em que usamos n = 2:
*
**
*
*/

void triangulo(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    triangulo(n);

    return 0;
}