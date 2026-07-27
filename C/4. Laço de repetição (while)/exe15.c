#include <stdio.h>

/*Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
de todos eles.*/

int main(){

    int cont = 1;
    int soma = 0;

    while (cont <= 100) {
        printf("%d\n", cont);
        soma += cont;
        cont++;
    }

    printf("A soma de todos os números de 1 a 100 é: %d\n", soma);

    return 0;
    
}