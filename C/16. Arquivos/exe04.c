#include <stdio.h>

/*Elabore um programa no qual o usuário informe o nome de um arquivo texto
e uma palavra, e o programa informe o número de vezes que aquela palavra
aparece dentro do arquivo.*/

int main() {
    char filename[100], word[100];
    FILE *file;
    int count = 0;
    char buffer[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    printf("Digite a palavra a ser contada: ");
    scanf("%s", word);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(file, "%99s", buffer) == 1) {
        if (strcmp(buffer, word) == 0) {
            count++;
        }
    }

    fclose(file);

    printf("A palavra '%s' aparece %d vezes no arquivo '%s'.\n", word, count, filename);

    return 0;
}