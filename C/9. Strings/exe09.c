#include <stdio.h>

/*Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o
valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o
valor total, o valor do desconto e o valor a ser pago à vista.*/

int main(){
    char nome[100];
    float valor, desconto, valor_a_vista;

    printf("Digite o nome da mercadoria: ");
    fgets(nome, sizeof(nome), stdin);

    size_t len = 0;
    while (nome[len] != '\0') {
        len++;
    }
    if (len > 0 && nome[len - 1] == '\n') {
        nome[len - 1] = '\0';
        len--;
    }

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    desconto = valor * 0.10; 
    valor_a_vista = valor - desconto; 

    printf("\nNome da mercadoria: %s\n", nome);
    printf("Valor total: R$ %.2f\n", valor);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valor_a_vista);

    return 0;
}