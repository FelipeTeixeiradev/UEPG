#include <stdio.h>

/*Para várias situações, a base de cálculo é o salário-mínimo. Fazer um Algoritmo que
leia o valor do salário-mínimo e o valor do salário de uma pessoa. Calcular e imprimir
quantos salários-mínimos essa pessoa ganha.*/

int main(){
    
    float salario_minimo, salario_pessoa, quantidade_salarios_minimos;
    
    printf("Digite o valor do salário-mínimo: ");
    scanf("%f", &salario_minimo);
    
    printf("Digite o valor do salário da pessoa: ");
    scanf("%f", &salario_pessoa);
    
    if(salario_minimo <= 0){
        printf("Erro: O salário-mínimo deve ser maior que zero.\n");
    } else {
        quantidade_salarios_minimos = salario_pessoa / salario_minimo;
        printf("A pessoa ganha %.2f salários-mínimos.\n", quantidade_salarios_minimos);
    }
    
    return 0;
    
}