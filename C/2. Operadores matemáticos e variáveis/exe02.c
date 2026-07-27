#include <stdio.h>

/*Criar um Algoritmo que efetue o cálculo do salário líquido de um professor. Os dados
fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de
desconto do INSS.*/

int main(){

    float valor_hora_aula, numero_aulas, percentual_desconto, salario_bruto, desconto_inss, salario_liquido;
    
    printf("Digite o valor da hora aula: ");
    scanf("%f", &valor_hora_aula);
    
    printf("Digite o número de aulas dadas no mês: ");
    scanf("%f", &numero_aulas);
    
    printf("Digite o percentual de desconto do INSS (em %): ");
    scanf("%f", &percentual_desconto);
    
    salario_bruto = valor_hora_aula * numero_aulas;
    desconto_inss = salario_bruto * (percentual_desconto / 100);
    salario_liquido = salario_bruto - desconto_inss;
    
    printf("O salário bruto é: %.2f\n", salario_bruto);
    printf("O valor do desconto do INSS é: %.2f\n", desconto_inss);
    printf("O salário líquido é: %.2f\n", salario_liquido);
    
    return 0;
    
}