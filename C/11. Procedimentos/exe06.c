#include <stdio.h>

/*Faça uma Procedimento em algoritmo que receba o total de segundos e
converta o valor em horas, minutos e segundos. O procedimento deve
imprimir os valores.*/

void converterSegundos(int totalSegundos);

int main() {
    int totalSegundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSegundos);

    converterSegundos(totalSegundos);

    return 0;
}

void converterSegundos(int totalSegundos) {
    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", totalSegundos, horas, minutos, segundos);
}