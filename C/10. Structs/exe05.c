#include <stdio.h>

/*Usando a estrutura Retângulo do exercício anterior, faça um
programa que declare e leia uma estrutura Retângulo e um Ponto, e informe se
esse ponto está ou não dentro do retângulo.*/

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto superiorEsquerdo;
    struct Ponto inferiorDireito;
};

int main() {
    struct Retangulo r;
    struct Ponto p;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inferiorDireito.x, &r.inferiorDireito.y);

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%f %f", &p.x, &p.y);

    if (p.x >= r.superiorEsquerdo.x &&
        p.x <= r.inferiorDireito.x &&
        p.y <= r.superiorEsquerdo.y &&
        p.y >= r.inferiorDireito.y) {

        printf("\nO ponto está dentro do retângulo.\n");
    } else {
        printf("\nO ponto NÃO está dentro do retângulo.\n");
    }

    return 0;
}