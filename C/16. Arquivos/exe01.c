#include <stdio.h>

/*Escreva um programa que leia do usuário o nome de um arquivo texto. Em
seguida, mostre na tela quantas linhas esse arquivo possui.*/

int main() {
    char filename[100];
    FILE *file;
    int line_count = 0;
    char ch;

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line_count++;
        }
    }

    fclose(file);

    printf("O arquivo '%s' possui %d linhas.\n", filename, line_count);

    return 0;
}