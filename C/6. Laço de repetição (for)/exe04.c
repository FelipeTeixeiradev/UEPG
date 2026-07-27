#include <stdio.h>

/*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0.*/

int main() {
    int count = 0;
    int number = 1;

    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");
    for (number = 1; count < 5; number++) {
        if (number % 3 == 0) {
            printf("%d\n", number);
            count++;
        }
    }

    return 0;
}