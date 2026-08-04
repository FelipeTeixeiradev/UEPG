#include <stdio.h>

/*Faça um programa que leia uma string e imprima uma mensagem dizendo se
ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a
propriedade de poder ser lida tanto da direita para a esquerda como da
esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.*/

int main() {
    char str[100];
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

    int is_palindrome = 1; 
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0; 
            break;
        }
    }

    if (is_palindrome) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}