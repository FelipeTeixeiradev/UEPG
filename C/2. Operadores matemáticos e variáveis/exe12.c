#include <stdio.h>

/*Em meados dos anos 2000 houve racionamento de energia e antes disto, quase
ninguém falava em quilowatts; mas, agora, todos incorporaram essa palavra em seu
vocabulário. Sabendo-se que 100 quilowatts de energia custa um sétimo do salário-
mínimo, fazer um Algoritmo que receba o valor do salário-mínimo e a quantidade de
quilowatts gasta por uma residência e calcule (imprima).
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%.*/

int main(){
    
    float salario_minimo, quilowatts_gastos, valor_quilowatt, valor_a_pagar, valor_com_desconto;
    
    printf("Digite o valor do salário-mínimo: ");
    scanf("%f", &salario_minimo);
    
    printf("Digite a quantidade de quilowatts gasta pela residência: ");
    scanf("%f", &quilowatts_gastos);
    
    if(salario_minimo <= 0){
        printf("Erro: O salário-mínimo deve ser maior que zero.\n");
    } else {
        valor_quilowatt = salario_minimo / 7 / 100; // Valor de cada quilowatt
        valor_a_pagar = valor_quilowatt * quilowatts_gastos; // Valor a ser pago
        valor_com_desconto = valor_a_pagar * 0.90; // Valor com desconto de 10%
        
        printf("O valor em reais de cada quilowatt é: %.2f\n", valor_quilowatt);
        printf("O valor em reais a ser pago é: %.2f\n", valor_a_pagar);
        printf("O novo valor a ser pago com desconto de 10%% é: %.2f\n", valor_com_desconto);
    }
    
    return 0;
    
}