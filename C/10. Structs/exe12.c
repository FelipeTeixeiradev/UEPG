#include <stdio.h>

/*Crie uma união contendo dois tipos básicos diferentes. Agora,
escreva um programa que inicialize um dos tipos dessa união e
exiba em tela o valor do outro tipo.*/

int main() {
    union Tipo {
        int inteiro;
        float decimal;
    };

    union Tipo valor;

    valor.inteiro = 42;

    printf("Valor do tipo decimal: %f\n", valor.decimal);

    return 0;
}