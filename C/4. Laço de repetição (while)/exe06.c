#include <stdio.h>

/*Escreva um Algoritmo que imprima todos os números múltiplos de 5, no intervalo
fechado de 1 a 500.*/

int main(){
    
    int cont = 1;

    while (cont <= 500) {
        if (cont % 5 == 0) {
            printf("%d\n", cont);
        }
        cont++;
    }

    return 0;
    
}