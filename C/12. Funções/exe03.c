#include <stdio.h>

/*Crie função, que solicite um número do usuário (n) e imprima:
1 `
1 2
1 2 3
.. .. ..
1 2 3 .. N*/

int imprimirTriangulo(int n);

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    imprimirTriangulo(n);

    return 0;
}

int imprimirTriangulo(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}