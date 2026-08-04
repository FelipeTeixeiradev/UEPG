#include <stdio.h>
#include <math.h>

/*Implemente uma função que calcule a área da superfície e o volume de uma esfera de
raio R. Essa função deve obedecer ao protótipo: void calc_esfera(float R, float *area, float
*volume)*/

const float M_PI = 3.14;

void calc_esfera(float R, float *area, float *volume);

int main() {
    float R, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("Área da superfície: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * M_PI * R * R;
    *volume = (4.0 / 3.0) * M_PI * R * R * R;
}