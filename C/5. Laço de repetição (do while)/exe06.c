#include <stdio.h>

/*Elabore um programa que receba a idade, peso, sexo e o estado civil de várias
pessoas e imprima a quantidade de pessoas casadas, solteiras, separadas e viúvas.
Apresente a média de idade e de peso. O algoritmo finaliza quando for informado
o valor zero para idade.*/

int main(){
    int idade, sexo, estadoCivil;
    int totalCasadas = 0, totalSolteiras = 0, totalSeparadas = 0, totalViuvas = 0;
    int totalPessoas = 0;
    float somaIdade = 0.0, somaPeso = 0.0;
    float peso;

    do {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade > 0) {
            printf("Digite o peso: ");
            scanf("%f", &peso);
            printf("Digite o sexo (1 - Masculino, 2 - Feminino): ");
            scanf("%d", &sexo);
            printf("Digite o estado civil (1 - Casado(a), 2 - Solteiro(a), 3 - Separado(a), 4 - Viúvo(a)): ");
            scanf("%d", &estadoCivil);

            // Atualiza contadores de estado civil
            switch (estadoCivil) {
                case 1:
                    totalCasadas++;
                    break;
                case 2:
                    totalSolteiras++;
                    break;
                case 3:
                    totalSeparadas++;
                    break;
                case 4:
                    totalViuvas++;
                    break;
                default:
                    printf("Estado civil inválido!\n");
                    break;
            }

            // Atualiza somas e contagem de pessoas
            somaIdade += idade;
            somaPeso += peso;
            totalPessoas++;
        }
    } while (idade != 0);

    // Calcula médias
    float mediaIdade = (totalPessoas > 0) ? (somaIdade / totalPessoas) : 0.0;
    float mediaPeso = (totalPessoas > 0) ? (somaPeso / totalPessoas) : 0.0;

    // Exibe resultados
    printf("\nQuantidade de pessoas casadas: %d\n", totalCasadas);
    printf("Quantidade de pessoas solteiras: %d\n", totalSolteiras);
    printf("Quantidade de pessoas separadas: %d\n", totalSeparadas);
    printf("Quantidade de pessoas viúvas: %d\n", totalViuvas);
    printf("Média de idade: %.2f\n", mediaIdade);
    printf("Média de peso: %.2f\n", mediaPeso);
    return 0;
}