#include <stdio.h>

/*Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a média
de todos eles.*/

int main(){

    int cont = 1;
    float soma = 0;

    while (cont <= 100) {
        printf("%d\n", cont);
        soma += cont;
        cont++;
    }

    printf("A média de todos os números de 1 a 100 é: %.2f\n", soma / 100);

    return 0;
    
}  