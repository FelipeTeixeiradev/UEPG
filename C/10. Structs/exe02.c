#include <stdio.h>

/*Crie uma estrutura para representar as coordenadas de um ponto no
plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba
a distância dele até a origem das coordenadas, isto é, a posição (0,0).*/

int main(){
    
    struct Ponto {
        float x;
        float y;
    };

    struct Ponto ponto;

    printf("Digite a coordenada X do ponto: ");
    scanf("%f", &ponto.x);

    printf("Digite a coordenada Y do ponto: ");
    scanf("%f", &ponto.y);

    float distancia = sqrt(ponto.x * ponto.x + ponto.y * ponto.y);

    printf("A distancia do ponto (%.2f, %.2f) até a origem (0,0) é: %.2f\n", ponto.x, ponto.y, distancia);

    return 0;
}