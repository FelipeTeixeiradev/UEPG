#include <stdio.h>

/*Elabore um algoritmo que:
a) leia as coordenadas de um retângulo (x1,y1), (x2,y2), (x3, y3), (x4, y4);
b) calcule o perímetro do retângulo formado pelas coordenadas lidas
c) imprima o perímetro do retângulo
Obs.: Cada tarefa deve ser realizada por um procedimento. Utilize apenas
variáveis globais.*/

void lerCoordenadas();
void calcularPerimetro();
void imprimirPerimetro();

int perimetro;
int x1, y1, x2, y2, x3, y3, x4, y4;

int main() {
    lerCoordenadas();
    calcularPerimetro();
    imprimirPerimetro();

    return 0;
}

void lerCoordenadas() {
    printf("Digite as coordenadas do retângulo (x1, y1), (x2, y2), (x3, y3), (x4, y4):\n");
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
}

void calcularPerimetro() {
    int lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    int lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    perimetro = 2 * (lado1 + lado2);
}

void imprimirPerimetro() {
    printf("O perímetro do retângulo é: %d\n", perimetro);
}