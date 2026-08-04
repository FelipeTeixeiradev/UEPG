#include <stdio.h>

/*Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida
na tela.*/

int main(){
    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1; 
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz 5x5 com diagonal principal preenchida com 1 e demais elementos com 0:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}