#include <stdio.h>

/*Criar um Algoritmo que leia o valor de um depósito e o valor da taxa de juros.
Calcular e imprimir o valor do rendimento e o valor total depois do rendimento
(rendimento mensal e anual).*/

int main(){
    
    float deposito, taxa_juros, rendimento_mensal, rendimento_anual, total_mensal, total_anual;
    
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    
    printf("Digite a taxa de juros (em %): ");
    scanf("%f", &taxa_juros);
    
    rendimento_mensal = deposito * (taxa_juros / 100);
    total_mensal = deposito + rendimento_mensal;
    
    rendimento_anual = deposito * (taxa_juros / 100) * 12;
    total_anual = deposito + rendimento_anual;
    
    printf("O rendimento mensal é: %.2f\n", rendimento_mensal);
    printf("O valor total depois do rendimento mensal é: %.2f\n", total_mensal);
    
    printf("O rendimento anual é: %.2f\n", rendimento_anual);
    printf("O valor total depois do rendimento anual é: %.2f\n", total_anual);
    
    return 0;
    
}