#include <stdio.h>

/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

int main() {
    int contador = 10;

    do {
        printf("%d\n", contador);
        contador--;
    } while (contador >= 0);

    printf("FIM!\n");
    return 0;
}