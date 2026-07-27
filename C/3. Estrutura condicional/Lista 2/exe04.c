#include <stdio.h>

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
estado possui uma taxa diferente de imposto sobre o produto. Faça um
programa em que o usuário entre com o valor e o estado de destino do
produto e o programa retorne o preço final do produto acrescido do imposto
do estado em que ele será vendido. Se o estado digitado não for válido,
mostrará uma mensagem de erro.
Estado - Imposto
SP - 12%
RJ - 15%
MG - 7%
MS - 8%*/

int main() {
    float valor, preco_final;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino (SP, RJ, MG, MS): ");
    scanf("%s", estado);

    if (valor < 0) {
        printf("Valor inválido. O valor do produto deve ser positivo.\n");
        return 1; // Exit with error
    }

    if (strcmp(estado, "SP") == 0) {
        preco_final = valor * 1.12; // 12% de imposto
    } else if (strcmp(estado, "RJ") == 0) {
        preco_final = valor * 1.15; // 15% de imposto
    } else if (strcmp(estado, "MG") == 0) {
        preco_final = valor * 1.07; // 7% de imposto
    } else if (strcmp(estado, "MS") == 0) {
        preco_final = valor * 1.08; // 8% de imposto
    } else {
        printf("Estado inválido. Digite SP, RJ, MG ou MS.\n");
        return 1; // Exit with error
    }

    printf("O preço final do produto no estado %s é: R$ %.2f\n", estado, preco_final);

    return 0;
}