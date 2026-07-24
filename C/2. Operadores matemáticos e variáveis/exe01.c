#include <stdio.h>

/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas
vendas oferecendo desconto. Faça um Algoritmo que possa entrar com o valor de um
produto e imprima o novo valor tendo em vista que o desconto foi de 9%. Além disso,
imprima o valor do desconto.*/

int main(){

    float valor_produto, novo_valor, desconto;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);
    
    desconto = valor_produto * 0.09;
    novo_valor = valor_produto - desconto;
    
    printf("O novo valor do produto é: %.2f\n", novo_valor);
    printf("O valor do desconto é: %.2f\n", desconto);
    
    return 0;
    
}