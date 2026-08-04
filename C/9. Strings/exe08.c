#include <stdio.h>

/*Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está
entre 65 e 90.*/

int main(){
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

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
    }

    printf("String em minúscula: %s\n", str);

    return 0;
}