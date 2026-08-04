#include <stdio.h>

/*Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.*/

int main() {
    int matriz[3][3];
    int somaDiagonal = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("Soma dos valores da diagonal principal: %d\n", somaDiagonal);

    return 0;
}