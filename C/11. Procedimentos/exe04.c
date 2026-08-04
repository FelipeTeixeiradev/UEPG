#include <stdio.h>

/*Crie um procedimento que peça 2 informações ao usuário: linhas e colunas.
Ele deve chamar uma função que desenhe um retângulo na tela usando os
caracteres ‘+’ , ‘−’ e ‘| ‘. Esta função deve receber dois parâmetros: linhas e
colunas. Ex.: linhas= 2; colunas = 1. 
+--+
|  |
+--+
*/

void desenharRetangulo(int linhas, int colunas);

int main() {
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    desenharRetangulo(linhas, colunas);

    return 0;
}

void desenharRetangulo(int linhas, int colunas) {
    printf("+");
    for (int i = 0; i < colunas; i++) {
        printf("-");
    }
    printf("+\n");

    for (int i = 0; i < linhas; i++) {
        printf("|");
        for (int j = 0; j < colunas; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < colunas; i++) {
        printf("-");
    }
    printf("+\n");
}