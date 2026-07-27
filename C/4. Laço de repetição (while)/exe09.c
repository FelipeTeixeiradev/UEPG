#include <stdio.h>

/*Escreva um Algoritmo que imprima o quadrado dos números no intervalo fechado de 1
a 20.*/

int main(){
    
    int cont = 1;

    while (cont <= 20) {
        printf("%d\n", cont * cont);
        cont++;
    }

    return 0;
    
}

