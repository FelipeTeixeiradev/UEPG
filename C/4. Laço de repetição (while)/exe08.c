#include <stdio.h>

/*Escreva um Algoritmo que imprima os 100 primeiros números ímpares.*/
 
int main(){
    
    int cont = 1;
    int count = 0;

    while (count < 100) {
        if (cont % 2 != 0) {
            printf("%d\n", cont);
            count++;
        }
        cont++;
    }

    return 0;
    
}