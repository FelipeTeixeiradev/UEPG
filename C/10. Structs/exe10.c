#include <stdio.h>

/*Usando a estrutura “atleta” do exercício anterior, escreva um
programa que leia os dados de cinco atletas e os exiba por ordem
de idade, do mais velho para o mais novo.*/

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

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (atletas[i].idade < atletas[j].idade) {
                struct Atleta temp = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = temp;
            }
        }
    }

    printf("\nAtletas ordenados por idade (do mais velho para o mais novo):\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s, Esporte: %s, Idade: %d, Altura: %.2f m\n",
               atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }

    return 0;
}