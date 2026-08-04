#include <stdio.h>

/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá
conter o ponto superior esquerdo e o ponto inferior direito do retângulo. Cada
ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e
o comprimento da diagonal e o perímetro desse retângulo.*/

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
    float largura, altura, area, perimetro, diagonal;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inferiorDireito.x, &r.inferiorDireito.y);

    largura = fabs(r.inferiorDireito.x - r.superiorEsquerdo.x);
    altura = fabs(r.superiorEsquerdo.y - r.inferiorDireito.y);

    area = largura * altura;
    perimetro = 2 * (largura + altura);
    diagonal = sqrt(largura * largura + altura * altura);

    printf("\nÁrea: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;    

}