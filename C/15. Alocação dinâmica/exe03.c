#include <stdio.h>

/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e
retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite
também que o usuário digite os dados desse vetor dentro da função.*/

struct Cadastro {
    char nome[50];
    int idade;
    char endereco[100];
};

int retornar_ponteiro(int N, struct Cadastro **cadastro);

int main() {
    int N;
    struct Cadastro *cadastro = NULL;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido. O valor deve ser positivo.\n");
        return 1;
    }

    if (retornar_ponteiro(N, &cadastro) != 0) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("\nDados cadastrados:\n");
    for (int i = 0; i < N; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", cadastro[i].nome);
        printf("Idade: %d\n", cadastro[i].idade);
        printf("Endereco: %s\n", cadastro[i].endereco);
        printf("\n");
    }

    free(cadastro); 

    return 0;
}

int retornar_ponteiro(int N, struct Cadastro **cadastro) {
    *cadastro = (struct Cadastro *)malloc(N * sizeof(struct Cadastro));
    if (*cadastro == NULL) {
        return -1; 
    }

    for (int i = 0; i < N; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", (*cadastro)[i].nome); 
        printf("Idade: ");
        scanf("%d", &(*cadastro)[i].idade);
        printf("Endereco: ");
        scanf(" %[^\n]", (*cadastro)[i].endereco); 
    }

    return 0; 
}