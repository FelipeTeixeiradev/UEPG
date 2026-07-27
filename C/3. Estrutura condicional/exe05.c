#include <stdio.h>

/*Construir um Algoritmo que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8;
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5.*/

int main() {

    int num1, num2, soma;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if(soma > 20){
        soma += 8;
        printf("O resultado da soma é: %d", soma);
    } else {
        soma -= 5;
        printf("O resultado da soma é: %d", soma);
    }

    return 0;
}