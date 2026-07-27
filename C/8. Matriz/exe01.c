#include <stdio.h>

/*Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.*/

int main(){
    int matriz[3][3];
    int menor;

    // Leitura dos valores da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa o menor valor com o primeiro elemento da matriz
    menor = matriz[0][0];

    // Determina o menor valor na matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Exibição do menor valor
    printf("O menor valor contido na matriz é: %d\n", menor);

    return 0;
}