#include <stdio.h>

/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de
comissão para o garçom. Crie um Algoritmo que leia o valor gasto com despesas
realizadas em um restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.*/

int main(){
    
    float valor_despesas, gorjeta, valor_total;
    
    printf("Digite o valor gasto com despesas no restaurante: ");
    scanf("%f", &valor_despesas);
    
    gorjeta = valor_despesas * 0.10;
    valor_total = valor_despesas + gorjeta;
    
    printf("O valor da gorjeta é: %.2f\n", gorjeta);
    printf("O valor total com a gorjeta é: %.2f\n", valor_total);
    
    return 0;
    
}