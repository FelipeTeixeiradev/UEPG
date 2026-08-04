#include <stdio.h>

/*Crie uma estrutura capaz de armazenar o nome e a data de
nascimento de uma pessoa. Agora, escreva um programa que leia
os dados de seis pessoas. Calcule e exiba os nomes da pessoa
mais nova e da mais velha.*/

int main() {
    struct Pessoa {
        char nome[50];
        int dia;
        int mes;
        int ano;
    };

    struct Pessoa pessoas[6];
    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a data de nascimento (dd mm aaaa) da pessoa %d: ", i + 1);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }

    int maisVelhaIndex = 0;
    int maisNovaIndex = 0;

    for (int i = 1; i < 6; i++) {
        if ((pessoas[i].ano < pessoas[maisVelhaIndex].ano) ||
            (pessoas[i].ano == pessoas[maisVelhaIndex].ano && pessoas[i].mes < pessoas[maisVelhaIndex].mes) ||
            (pessoas[i].ano == pessoas[maisVelhaIndex].ano && pessoas[i].mes == pessoas[maisVelhaIndex].mes && pessoas[i].dia < pessoas[maisVelhaIndex].dia)) {
            maisVelhaIndex = i;
        }
        if ((pessoas[i].ano > pessoas[maisNovaIndex].ano) ||
            (pessoas[i].ano == pessoas[maisNovaIndex].ano && pessoas[i].mes > pessoas[maisNovaIndex].mes) ||
            (pessoas[i].ano == pessoas[maisNovaIndex].ano && pessoas[i].mes == pessoas[maisNovaIndex].mes && pessoas[i].dia > pessoas[maisNovaIndex].dia)) {
            maisNovaIndex = i;
        }
    }

    printf("Pessoa mais velha: %s\n", pessoas[maisVelhaIndex].nome);
    printf("Pessoa mais nova: %s\n", pessoas[maisNovaIndex].nome);

    return 0;
}