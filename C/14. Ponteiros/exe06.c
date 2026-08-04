#include <stdio.h>

/*Elabore uma função que receba duas strings como parâmetros e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings.*/

int verifica_ocorrencia(char *str1, char *str2);

int main() {
    char str1[200], str2[200];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    if (verifica_ocorrencia(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string não ocorre dentro da primeira.\n");
    }

    return 0;
}

int verifica_ocorrencia(char *str1, char *str2) {
    char *p1, *p2;

    for (p1 = str1; *p1 != '\0'; p1++) {
        for (p2 = str2; *p2 != '\0' && *p1 == *p2; p1++, p2++) {
            ;
        }
        if (*p2 == '\0') {
            return 1;
        }
    }
    return 0;
}