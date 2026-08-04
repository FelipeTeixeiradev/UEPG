#include <stdio.h>

/*Crie uma estrutura representando uma hora. Essa estrutura deve
conter os campos hora, minuto e segundo. Agora, escreva um programa que
leia um vetor de cinco posições dessa estrutura e imprima a maior hora.*/

struct Hora {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Hora h[5], maior;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a hora %d (hh mm ss): ", i + 1);
        scanf("%d %d %d", &h[i].hora, &h[i].minuto, &h[i].segundo);
    }

    maior = h[0];

    for (i = 1; i < 5; i++) {
        if (h[i].hora > maior.hora ||
            (h[i].hora == maior.hora && h[i].minuto > maior.minuto) ||
            (h[i].hora == maior.hora && h[i].minuto == maior.minuto && h[i].segundo > maior.segundo)) {

            maior = h[i];
        }
    }

    printf("\nMaior hora: %02d:%02d:%02d\n",
           maior.hora, maior.minuto, maior.segundo);

    return 0;
}