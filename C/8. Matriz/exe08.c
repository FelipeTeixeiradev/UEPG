#include <stdio.h>

/*Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos
são da forma:
A[i][j] = 2i + 7j – 2 se i &lt; j
A[i][j] = 3i^2 – 1 se i = j
A[i][j] = 4i^3 + 5j^2 + 1 se i &gt; j*/

int main() {
    int A[10][10];

    // Preenchimento da matriz de acordo com as condições fornecidas
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                A[i][j] = 2 * i + 7 * j - 2;
            } else if (i == j) {
                A[i][j] = 3 * i * i - 1;
            } else { // i > j
                A[i][j] = 4 * i * i * i + 5 * j * j + 1;
            }
        }
    }

    // Exibição da matriz
    printf("Matriz A:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}