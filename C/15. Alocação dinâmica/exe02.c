#include <stdio.h>

/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um
programa que mostre o tamanho em byte dessa estrutura.*/

struct Aluno {
    int matricula;
    char nome[50];
    float notas[3];
};

int main() {
    printf("Tamanho da estrutura Aluno: %zu byte(s)\n", sizeof(struct Aluno));
    return 0;
}
