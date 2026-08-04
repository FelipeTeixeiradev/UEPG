#include <stdio.h>

/*Crie um procedimento que peça 2 informações ao usuário: linhas e colunas.
Ele deve chamar uma função que desenhe um retângulo na tela usando os
caracteres ‘+’ , ‘−’ e ‘| ‘. Esta função deve receber dois parâmetros: linhas e
colunas. Ex.: linhas= 2; colunas = 8*/

void desenhaRetangulo(int linhas, int colunas) {
    int i, j;

    for (i = 1; i <= linhas; i++) {
        for (j = 1; j <= colunas; j++) {

            if (i == 1 || i == linhas) {
                if (j == 1 || j == colunas)
                    printf("+");
                else
                    printf("-");
            }
            else {
                if (j == 1 || j == colunas)
                    printf("|");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}

void lerDados() {
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    desenhaRetangulo(linhas, colunas);
}

int main() {
    lerDados();
    return 0;
}