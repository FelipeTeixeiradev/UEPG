#include <stdio.h>

/*Escreva um Algoritmo que imprima todos os números pares do intervalo fechado de 1
a 100.*/

int main(){
    
    int cont = 1;

    while (cont <= 100) {
        if (cont % 2 == 0) {
            printf("%d\n", cont);
        }
        cont++;
    }

    return 0;
    
}