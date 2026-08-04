#include <stdio.h>

/*Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/

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
    
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}