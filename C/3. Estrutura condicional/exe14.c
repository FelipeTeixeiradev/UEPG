#include <stdio.h>

/*Construa um Algoritmo que dado quatro valores, A, B, C e D, o Algoritmo
imprima o maior e o menor valor.*/

int main(){

    int num1, num2, num3, num4, maior, menor;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    maior = num1;
    menor = num1;

    if(num2 > maior){
        maior = num2;
    } else if(num2 < menor){
        menor = num2;
    }

    if(num3 > maior){
        maior = num3;
    } else if(num3 < menor){
        menor = num3;
    }

    if(num4 > maior){
        maior = num4;
    } else if(num4 < menor){
        menor = num4;
    }

    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d", menor);

    return 0;
}
