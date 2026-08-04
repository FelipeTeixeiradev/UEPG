#include <stdio.h>

/*A multiplicação de dois números inteiros pode ser feita através de somas
sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que
calcule a multiplicação por somas sucessivas de dois inteiros.*/

int multiplicacao(int a, int b) {
    if (b == 0) {
        return 0; 
    } else if (b > 0) {
        return a + multiplicacao(a, b - 1); 
    } else {
        return -multiplicacao(a, -b); 
    }
}

int main() {
    int a, b;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    int resultado = multiplicacao(a, b);
    printf("%d multiplicado por %d é: %d\n", a, b, resultado);

    return 0;
}