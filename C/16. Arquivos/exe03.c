#include <stdio.h>

/*Escreva um programa para converter o conteúdo de um arquivo texto em
caracteres maiúsculos. O programa deverá ler do usuário o nome do arquivo a
ser convertido e o nome do arquivo a ser salvo.*/

int main() {
    char input_filename[100], output_filename[100];
    FILE *input_file, *output_file;
    char ch;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", input_filename);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", output_filename);

    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", input_filename);
        return 1;
    }

    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Erro ao criar o arquivo de saída %s.\n", output_filename);
        fclose(input_file);
        return 1;
    }

    while ((ch = fgetc(input_file)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); // Converte para maiúsculo
        }
        fputc(ch, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    printf("Conteúdo do arquivo %s foi convertido para maiúsculas e salvo em %s.\n", input_filename, output_filename);

    return 0;
}