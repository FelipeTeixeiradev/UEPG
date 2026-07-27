#include <stdio.h>

/*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.*/

int main(){
    int matriz[4][4];
    int countNegativos = 0;

    // Leitura dos valores da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] < 0) {
                countNegativos++;
            }
        }
    }

    // Exibição do resultado
    printf("Quantidade de valores negativos na matriz: %d\n", countNegativos);

    return 0;
}