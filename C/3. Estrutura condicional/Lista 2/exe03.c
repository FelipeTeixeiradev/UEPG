#include <stdio.h>

/*Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário
escolhe uma das opções, e o seu programa pede dois valores numéricos e
realiza a operação, mostrando o resultado*/

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha uma operação matemática:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    if(opcao < 1 || opcao > 4) {
        printf("Opção inválida.\n");
        return 1; // Exit with error
    }

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adição: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if(num2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 1; // Exit with error
            }
            resultado = num1 / num2;
            printf("Resultado da divisão: %.2f\n", resultado);
            break;
    }

    return 0;
}