#include <stdio.h>

/*Escreva um programa que leia do usuário os nomes de dois arquivos texto.
Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o
conteúdo do primeiro seguido do conteúdo do segundo).*/

int main() {
    char filename1[100], filename2[100], output_filename[100];
    FILE *file1, *file2, *output_file;
    char ch;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", filename1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", filename2);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", output_filename);

    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", filename1);
        return 1;
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", filename2);
        fclose(file1);
        return 1;
    }

    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Erro ao criar o arquivo de saída %s.\n", output_filename);
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, output_file);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, output_file);
    }

    fclose(file1);
    fclose(file2);
    fclose(output_file);

    printf("Conteúdo dos arquivos %s e %s foi combinado em %s.\n", filename1, filename2, output_filename);

    return 0;
}