#include <stdio.h>

/*Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
calcule o quadrado de cada elemento desse vetor armazenando esse resultado
em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois
conjuntos de números.*/

int main() {
    float vetor[20], quadrado[20];
    int n;

    // Leitura do número de elementos
    printf("Digite o número de elementos (máximo 20): ");
    scanf("%d", &n);

    // Verifica se o número de elementos é válido
    if (n < 1 || n > 20) {
        printf("Número de elementos inválido. Deve ser entre 1 e 20.\n");
        return 1;
    }

    // Leitura dos valores para o vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        quadrado[i] = vetor[i] * vetor[i]; // Calcula o quadrado
    }

    // Exibição dos valores originais e seus quadrados
    printf("Valores originais e seus quadrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor: %.2f, Quadrado: %.2f\n", vetor[i], quadrado[i]);
    }

    return 0;
}