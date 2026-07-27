#include <stdio.h>

/*Criar um Algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e
5, ao mesmo tempo, no intervalo fechado de 1 a NUM.*/

int main(){

    int num, cont = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (cont <= num) {
        if (cont % 3 == 0 && cont % 5 == 0) {
            printf("%d\n", cont);
        }
        cont++;
    }

    return 0;
    
}