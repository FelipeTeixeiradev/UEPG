#include <stdio.h>

/*Elabore um algoritmo que:
a) leia as coordenadas de um retângulo (x1,y1), (x2,y2), (x3, y3), (x4, y4);
b) calcule o perímetro do retângulo formado pelas coordenadas lidas
c) imprima o perímetro do retângulo
Obs.: Cada tarefa deve ser realizada por uma função. Utilize apenas
variáveis globais.*/

float x1, y1, x2, y2, x3, y3, x4, y4;
float lado1, lado2, perimetro;

void lerCoordenadas() {
    printf("Digite as coordenadas do ponto 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Digite as coordenadas do ponto 3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    printf("Digite as coordenadas do ponto 4 (x4 y4): ");
    scanf("%f %f", &x4, &y4);
}

void calcularPerimetro() {
    lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    perimetro = 2 * (lado1 + lado2);
}


void imprimirPerimetro() {
    printf("\nPerimetro do retangulo: %.2f\n", perimetro);
}

int main() {
    lerCoordenadas();
    calcularPerimetro();
    imprimirPerimetro();

    return 0;
}