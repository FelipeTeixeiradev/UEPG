#include <stdio.h>

/*Escreva um programa que contenha uma estrutura representando
uma data válida. Essa estrutura deve conter os campos dia, mês e
ano. Em seguida, leia duas datas e armazene nessa estrutura.
Calcule e exiba o número de dias que decorreram entre as duas
datas.*/

int main(){
    struct Data {
        int dia;
        int mes;
        int ano;
    };

    struct Data data1, data2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int dias1 = data1.ano * 365 + data1.mes * 30 + data1.dia;
    int dias2 = data2.ano * 365 + data2.mes * 30 + data2.dia;

    int diferencaDias = dias2 - dias1;

    printf("Número de dias entre as duas datas: %d\n", diferencaDias);

    return 0;
}