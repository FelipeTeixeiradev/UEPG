#include <stdio.h>

/*Escreva um Algoritmo que leia 20 números e imprima a soma dos positivos e o total
de números negativos.*/

int main(){
    
    int cont = 1;
    int num, somaPositivos = 0, totalNegativos = 0;

    while (cont <= 20) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > 0) {
            somaPositivos += num;
        } else if (num < 0) {
            totalNegativos++;
        }
        cont++;
    }

    printf("Soma dos números positivos: %d\n", somaPositivos);
    printf("Total de números negativos: %d\n", totalNegativos);

    return 0;
    
}