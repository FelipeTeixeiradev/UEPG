#include <stdio.h>

/*Escreva um Algoritmo que imprima todos os números inteiros de 200 a 100 (em
ordem decrescente).*/

int main(){
    
    int cont = 200;

    while (cont >= 100) {
        printf("%d\n", cont);
        cont--;
    }

    return 0;
    
}   