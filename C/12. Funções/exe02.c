#include <stdio.h>

/*Faça uma função que receba um número inteiro de 1 a 12 e imprima
em tela o mês e a sua quantidade de dias de acordo com o número digitado
pelo usuário. Exemplo: Entrada = 4. Saída = abril.*/

int obterQuantidadeDias(int mes);

int main(){
    int mes;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);

    int dias = obterQuantidadeDias(mes);
    if (dias != -1) {
        printf("O mês %d tem %d dias.\n", mes, dias);
    } else {
        printf("Mês inválido!\n");
    }

    return 0;
}

int obterQuantidadeDias(int mes) {
    switch (mes) {
        case 1:
            return 31; 
        case 2:
            return 28; 
        case 3:
            return 31; 
        case 4:
            return 30; 
        case 5:
            return 31; 
        case 6:
            return 30; 
        case 7:
            return 31; 
        case 8:
            return 31; 
        case 9:
            return 30; 
        case 10:
            return 31; 
        case 11:
            return 30; 
        case 12:
            return 31; 
        default:
            return -1; 
    }
}