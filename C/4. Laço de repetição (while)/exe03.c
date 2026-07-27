#include <stdio.h>

/*Escreva um Algoritmo que imprima todos os números inteiros de 100 a 1 (em ordem
decrescente).*/

int main(){
    
    int cont = 100;

    while (cont >= 1) {
        printf("%d\n", cont);
        cont--;
    }

    return 0;
    
}