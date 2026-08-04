#include <stdio.h>

/*A CEF concederá um crédito especial com juros de 2% aos seus clientes de
acordo com o saldo médio no último ano. Fazer um Algoritmo que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
Imprimir uma mensagem informando o saldo médio e o valor de crédito.
Saldo Médio - Percentual de Crédito
de 0 a 500 - não tem direito a crédito
de 501 a 1000 - crédito de 30% do valor do saldo médio
de 1001 a 3000 - crédito de 40% do valor do saldo médio
acima de 3000 - crédito de 50% do valor do saldo médio*/

int main(){

    float saldo_medio, credito;

    printf("Digite o saldo médio do cliente: ");
    scanf("%f", &saldo_medio);

    if(saldo_medio >= 0 && saldo_medio <= 500){
        credito = 0;
        printf("O cliente não tem direito a crédito.\n");
    } else if(saldo_medio >= 501 && saldo_medio <= 1000){
        credito = saldo_medio * 0.3;
        printf("O cliente tem direito a um crédito de 30%% do valor do saldo médio.\n");
    } else if(saldo_medio >= 1001 && saldo_medio <= 3000){
        credito = saldo_medio * 0.4;
        printf("O cliente tem direito a um crédito de 40%% do valor do saldo médio.\n");
    } else if(saldo_medio > 3000){
        credito = saldo_medio * 0.5;
        printf("O cliente tem direito a um crédito de 50%% do valor do saldo médio.\n");
    } else {
        printf("Saldo médio inválido.\n");
        return 1; // Faz sair quando dá erro
    }

    printf("Saldo médio: %.2f\n", saldo_medio);
    printf("Valor do crédito: %.2f\n", credito);

    return 0;
}