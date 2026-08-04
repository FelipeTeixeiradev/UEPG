#include <stdio.h>

/*Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).*/

int main() {
    int matriz[4][4];
    int maior, linhaMaior, colunaMaior;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("O maior valor contido na matriz é: %d\n", maior);
    printf("Localização: Linha %d, Coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}