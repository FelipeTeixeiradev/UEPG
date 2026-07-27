#include <stdio.h>

/*A prefeitura de Contagem abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Fazer um Algoritmo que permita entrar com o salário bruto e o valor da
prestação, e informar se o empréstimo pode ou não ser concedido.*/

int main(){

    float salario, prestacao, limite;

    printf("Digite o salário bruto: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    limite = salario * 0.3;

    if(prestacao <= limite){
        printf("Empréstimo concedido.");
    } else {
        printf("Empréstimo não concedido.");
    }

    return 0;
}
