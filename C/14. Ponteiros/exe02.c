#include <stdio.h>

/*Escreva uma função void swap(int *a, int *b) que troque os valores apontados por a e b.
Em main, leia dois inteiros, chame swap e imprima os valores trocados.*/

void swap(int *a, int *b);

int main(){
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("Depois da troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}