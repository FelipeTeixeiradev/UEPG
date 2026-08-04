#include <stdio.h>

/*Crie uma estrutura representando um atleta. Essa estrutura deve
conter o nome do atleta, seu esporte, idade e altura. Agora, escreva
um programa que leia os dados de cinco atletas. Calcule e exiba os
nomes do atleta mais alto e do mais velho.*/

int main() {
    struct Atleta {
        char nome[50];
        char esporte[30];
        int idade;
        float altura;
    };

    struct Atleta atletas[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf("%s", atletas[i].nome);
        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf("%s", atletas[i].esporte);
        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura do atleta %d (em metros): ", i + 1);
        scanf("%f", &atletas[i].altura);
    }

    int maisVelhoIndex = 0;
    int maisAltoIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (atletas[i].idade > atletas[maisVelhoIndex].idade) {
            maisVelhoIndex = i;
        }
        if (atletas[i].altura > atletas[maisAltoIndex].altura) {
            maisAltoIndex = i;
        }
    }

    printf("Atleta mais velho: %s\n", atletas[maisVelhoIndex].nome);
    printf("Atleta mais alto: %s\n", atletas[maisAltoIndex].nome);

    return 0;
}