#include <stdio.h>

/*Criar um Algoritmo que leia os limites inferior e superior de um intervalo e imprima
todos os números pares no intervalo aberto e seu somatório. Suponha que os dados
digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o
segundo.*/

int main(){

    int limite_inferior, limite_superior;
    int cont;
    int soma = 0;

    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &limite_inferior);
    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &limite_superior);

    cont = limite_inferior + 1;

    while (cont < limite_superior) {
        if (cont % 2 == 0) {
            printf("%d\n", cont);
            soma += cont;
        }
        cont++;
    }

    printf("A soma de todos os números pares no intervalo aberto é: %d\n", soma);

    return 0;
    
}