#include <stdio.h>

/*Dados três valores A, B e C, construa um Algoritmo, que imprima os valores de
forma ascendente (do menor para o maior).*/

int main(){

    int num1, num2, num3, menor, meio, maior;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if(num1 < num2 && num1 < num3){
        menor = num1;
        if(num2 < num3){
            meio = num2;
            maior = num3;
        } else {
            meio = num3;
            maior = num2;
        }
    } else if(num2 < num1 && num2 < num3){
        menor = num2;
        if(num1 < num3){
            meio = num1;
            maior = num3;
        } else {
            meio = num3;
            maior = num1;
        }
    } else {
        menor = num3;
        if(num1 < num2){
            meio = num1;
            maior = num2;
        } else {
            meio = num2;
            maior = num1;
        }
    }

    printf("Os números digitados em ordem ascendente são: %d, %d e %d", menor, meio, maior);

    return 0;
}