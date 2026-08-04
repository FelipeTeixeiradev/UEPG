#include <stdio.h>

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
estado possui uma taxa diferente de imposto sobre o produto. Faça um
programa em que o usuário entre com o valor e o estado de destino do
produto e o programa retorne o preço final do produto acrescido do imposto
do estado em que ele será vendido. Se o estado digitado não for válido,
mostrará uma mensagem de erro somente usando switch case, sem vetores.
Estado - Imposto
SP - 12%
RJ - 15%
MG - 7%
MS - 8%*/

int main(){
    float valor, valor_final;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino (SP, RJ, MG ou MS): ");
    scanf("%2s", estado);

    switch (estado[0]) {
        case 's':
        case 'S':
            switch (estado[1]) {
                case 'p':
                case 'P':
                    valor_final = valor * 1.12;
                    printf("Preco final: %.2f\n", valor_final);
                    break;
                case 'm':
                case 'M':
                    valor_final = valor * 1.08;
                    printf("Preco final: %.2f\n", valor_final);
                    break;
                default:
                    printf("Estado invalido!\n");
            }
            break;

        case 'r':
        case 'R':
            switch (estado[1]) {
                case 'j':
                case 'J':
                    valor_final = valor * 1.15;
                    printf("Preco final: %.2f\n", valor_final);
                    break;
                default:
                    printf("Estado invalido!\n");
            }
            break;

        case 'm':
        case 'M':
            switch (estado[1]) {
                case 'g':
                case 'G':
                    valor_final = valor * 1.07;
                    printf("Preco final: %.2f\n", valor_final);
                    break;
                case 's':
                case 'S':
                    valor_final = valor * 1.08;
                    printf("Preco final: %.2f\n", valor_final);
                    break;
                default:
                    printf("Estado invalido!\n");
            }
            break;

        default:
            printf("Estado invalido!\n");
    }

    return 0;
}