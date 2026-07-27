#include <stdio.h>

/*Faça um programa que leia um conjunto de pedidos e calcule o total da compra.
O pedido possui os seguintes campos: número, data (dia, mês e ano), preço
unitário e quantidade. A entrada de pedidos é encerrada quando o usuário
informa zero como número do pedido.*/

int main() {
    int numeroPedido;
    int dia, mes, ano;
    float precoUnitario;
    int quantidade;
    float totalCompra = 0.0;

    do {
        printf("Digite o número do pedido (ou 0 para encerrar): ");
        scanf("%d", &numeroPedido);

        if (numeroPedido != 0) {
            printf("Digite a data do pedido (dia mês ano): ");
            scanf("%d %d %d", &dia, &mes, &ano);
            printf("Digite o preço unitário: ");
            scanf("%f", &precoUnitario);
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            totalCompra += precoUnitario * quantidade;
        }
    } while (numeroPedido != 0);

    printf("O total da compra é: R$ %.2f\n", totalCompra);
    return 0;
}