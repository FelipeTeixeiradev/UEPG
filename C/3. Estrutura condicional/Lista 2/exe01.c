#include <stdio.h>

/*Faça um programa que leia três números inteiros positivos e efetue o cálculo
de uma das seguintes médias de acordo com um valor numérico digitado pelo
usuário e mostrado na tabela a seguir:
1 - Média Geométrica
2 - Média Ponderada
3 - Média Harmônica
4 - Média Aritmética
*/

int main(){

    int num1, num2, num3, opcao;
    float media;

    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 <= 0 || num2 <= 0 || num3 <= 0){
        printf("Os números devem ser inteiros positivos.\n");
        return 1; // Exit with error
    }

    printf("Escolha a opção de média:\n");
    printf("1 - Média Geométrica\n");
    printf("2 - Média Ponderada\n");
    printf("3 - Média Harmônica\n");
    printf("4 - Média Aritmética\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            media = cbrt(num1 * num2 * num3); // Média Geométrica
            break;
        case 2:
            media = (num1 + 2*num2 + 3*num3) / 6.0; // Média Ponderada
            break;
        case 3:
            media = 3.0 / ((1.0/num1) + (1.0/num2) + (1.0/num3)); // Média Harmônica
            break;
        case 4:
            media = (num1 + num2 + num3) / 3.0; // Média Aritmética
            break;
        default:
            printf("Opção inválida.\n");
            return 1; // Exit with error
    }

    printf("A média calculada é: %.2f\n", media);

    return 0;
}