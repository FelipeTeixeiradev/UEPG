#include <stdio.h>

/*Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da
palavra dada por esse caractere. Ao final, imprima a nova string e o número de
vogais que ela possui.*/

int main(){
    char str[100];
    char ch;
    int count = 0;

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

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &ch);

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
            str[i] = ch;
        }
    }

    printf("Nova string: %s\n", str);
    printf("Número de vogais substituídas: %d\n", count);

    return 0;
}