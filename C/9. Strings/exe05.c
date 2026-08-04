#include <stdio.h>

/*Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da primeira.*/

int main(){
    char str1[100], str2[100];
    int found = 0;

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
            found = 1; 
            break;
        }
    }

    if (found) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string não está contida na primeira.\n");
    }

    return 0;
}