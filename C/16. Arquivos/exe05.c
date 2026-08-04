#include <stdio.h>

/*Faça um programa que leia números positivos e os converta em binário.
Cada número binário deverá ser salvo em uma linha de um arquivo texto. O
programa termina quando o usuário digitar um número negativo.*/

int main() {
    FILE *file;
    int number;

    file = fopen("binarios.txt", "w");
    if (file == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    while (1) {
        printf("Digite um número positivo (ou negativo para sair): ");
        scanf("%d", &number);

        if (number < 0) {
            break;
        }

        // Converte o número para binário e escreve no arquivo
        for (int i = 31; i >= 0; i--) {
            fprintf(file, "%d", (number >> i) & 1);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Números binários salvos em 'binarios.txt'.\n");

    return 0;
}