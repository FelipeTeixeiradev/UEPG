#include <stdio.h>

/*Crie uma estrutura representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas de
três provas. Agora, escreva um programa que leia os dados de cinco alunos e
os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno
que possui a maior média geral dentre os cinco.*/

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno alunos[5];
    float media, maiorMedia = 0;
    int i, indiceMaior = 0;

    for (i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (i == 0 || media > maiorMedia) {
            maiorMedia = media;
            indiceMaior = i;
        }
    }

    printf("\nAluno com a maior media:\n");
    printf("Nome: %s\n", alunos[indiceMaior].nome);
    printf("Matricula: %d\n", alunos[indiceMaior].matricula);
    printf("Nota 1: %.2f\n", alunos[indiceMaior].nota1);
    printf("Nota 2: %.2f\n", alunos[indiceMaior].nota2);
    printf("Nota 3: %.2f\n", alunos[indiceMaior].nota3);
    printf("Media: %.2f\n", maiorMedia);

    return 0;
}