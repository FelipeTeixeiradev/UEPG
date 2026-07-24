#include <stdio.h>

/*Criar um Algoritmo que efetue o cálculo da quantidade de litros de combustível
gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser
fornecidos o tempo gasto na viagem e a velocidade média.
Distância = Tempo x Velocidade.
Litros = Distancia / 12.
O Algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de
Litros utilizados na viagem.*/

int main(){

    float tempo, velocidade_media, distancia, litros;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade_media);

    distancia = tempo * velocidade_media;
    litros = distancia / 12;

    printf("A distância percorrida é: %.2f km\n", distancia);
    printf("A quantidade de litros utilizados na viagem é: %.2f litros\n", litros);

    return 0;

}