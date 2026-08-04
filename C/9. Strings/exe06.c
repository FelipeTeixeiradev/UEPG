#include <stdio.h>

/*Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando quantas vezes a segunda string lida está contida dentro
da primeira.*/

int main(){
    char str1[100], str2[100];
    int count = 0;

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

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            count++; 
        }
    }

    printf("A segunda string está contida na primeira %d vezes.\n", count);

    return 0;
}