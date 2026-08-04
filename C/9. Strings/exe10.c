#include <stdio.h>

/*Escreva um programa que recebe uma string S e dois valores inteiros não
negativos i e j. Em seguida, imprima os caracteres contidos no segmento que
vai de i a j da string S.Arrays de caracteres – strings 143*/

int main() {
    char str[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Digite os valores de i e j (não negativos): ");
    scanf("%d %d", &i, &j);

    if (i < 0 || j < 0 || i >= len || j >= len || i > j) {
        printf("Índices inválidos.\n");
        return 1;
    }

    printf("Segmento da string de %d a %d: ", i, j);
    for (int k = i; k <= j; k++) {
        putchar(str[k]);
    }
    printf("\n");

    return 0;
}