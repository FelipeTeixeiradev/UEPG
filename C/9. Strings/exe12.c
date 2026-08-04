#include <stdio.h>

/*Escreva um programa que leia duas strings e as imprima em ordem alfabética,
a ordem em que elas apareceriam em um dicionário.*/

int main(){
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    size_t len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    size_t len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    if (strcmp(str1, str2) < 0) {
        printf("Ordem alfabética:\n%s\n%s\n", str1, str2);
    } else {
        printf("Ordem alfabética:\n%s\n%s\n", str2, str1);
    }

    return 0;
}