#include <stdio.h>

/*Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
da metade desses números.*/

int main(){

    int cont = 1;
    float soma = 0;

    while (cont <= 100) {
        printf("%d\n", cont);
        soma += cont / 2.0;
        cont++;
    }

    printf("A soma da metade de todos os números de 1 a 100 é: %.2f\n", soma);

    return 0;
    
}

