#include <stdio.h>

/*Crie uma função void reverse(char *s) que inverte a string s in place (sem usar
memória extraproporcional ao tamanho). No main, leia uma linha (até 200 caracteres),
chame reverse e imprima a string invertida.*/

void reverse(char *s);

int main(){
    char s[200];
    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);
    reverse(s);
    printf("String invertida: %s", s);
    return 0;
}

void reverse(char *s) {
    char *start = s;
    char *end = s;

    while (*end != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}