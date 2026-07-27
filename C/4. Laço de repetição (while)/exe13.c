#include <stdio.h>

/*Escreva um Algoritmo que receba quinze números do usuário e imprima a raiz
quadrada de cada número.*/

int main(){
    
    int cont = 1;
    float num1;

    while (cont <= 15) {
        printf("Digite um número: ");
        scanf("%f", &num1);
        printf("A raiz quadrada do número digitado é: %.2f\n", sqrt(num1));
        cont++;
    }

    return 0;
}
