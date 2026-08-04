#include <stdio.h>

/*Escreva uma função recursiva que receba um valor inteiro e o retorne
invertido. Exemplo:
Número lido = 123. Número retornado = 321.*/

int inverterNumero(int numero) {
    static int invertido = 0;
    static int multiplicador = 1;

    if (numero == 0) {
        return invertido;
    } else {
        invertido += (numero % 10) * multiplicador;
        multiplicador *= 10;
        return inverterNumero(numero / 10);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = inverterNumero(numero);
    printf("O número invertido é: %d\n", resultado);

    return 0;
}