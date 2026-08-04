#include <stdio.h>

/*Faça uma Procedimento em algoritmo que receba o total de segundos e
converta o valor em horas, minutos e segundos. O procedimento deve
imprimir os valores.*/

void converterTempo(int totalSegundos) {
    int horas, minutos, segundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("\nHoras: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
}

int main() {
    int totalSegundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSegundos);

    converterTempo(totalSegundos);

    return 0;
}