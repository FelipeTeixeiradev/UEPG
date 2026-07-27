#include <stdio.h>

/*Construa um programa que possibilite calcular a área total de uma residência
(sala, cozinha, banheiro, quartos etc.). O programa deve solicitar a entrada do
nome, a largura e o comprimento de um determinado cômodo até que o nome do
cômodo seja “FIM”. O programa deve apresentar o valor total acumulado da área
residencial.*/

int main(){
    
    char nomeComodo[50];
    float largura, comprimento, areaTotal = 0.0;

    do {
        printf("Digite o nome do cômodo (ou 'FIM' para encerrar): ");
        scanf("%s", nomeComodo);

        if (strcmp(nomeComodo, "FIM") != 0) {
            printf("Digite a largura do cômodo: ");
            scanf("%f", &largura);
            printf("Digite o comprimento do cômodo: ");
            scanf("%f", &comprimento);

            float areaComodo = largura * comprimento;
            areaTotal += areaComodo;
        }
    } while (strcmp(nomeComodo, "FIM") != 0);

    printf("A área total da residência é: %.2f m²\n", areaTotal);
}