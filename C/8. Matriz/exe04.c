#include <stdio.h>

/*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui..*/

int main() {
    int matriz[4][4];
    int countMaiorQue10 = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                countMaiorQue10++;
            }
        }
    }

    printf("Quantidade de valores maiores do que 10 na matriz: %d\n", countMaiorQue10);

    return 0;
}