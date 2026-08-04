#include <stdio.h>

/*Crie uma estrutura para representar as coordenadas de um ponto no
plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e
exiba a distância entre eles.*/

int main(){
    
    struct Ponto {
        float x;
        float y;
    };

    struct Ponto ponto1, ponto2;

    printf("Digite a coordenada X do primeiro ponto: ");
    scanf("%f", &ponto1.x);

    printf("Digite a coordenada Y do primeiro ponto: ");
    scanf("%f", &ponto1.y);

    printf("Digite a coordenada X do segundo ponto: ");
    scanf("%f", &ponto2.x);

    printf("Digite a coordenada Y do segundo ponto: ");
    scanf("%f", &ponto2.y);

    float distancia = sqrt((ponto2.x - ponto1.x) * (ponto2.x - ponto1.x) + (ponto2.y - ponto1.y) * (ponto2.y - ponto1.y));

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n", ponto1.x, ponto1.y, ponto2.x, ponto2.y, distancia);

    return 0;
}