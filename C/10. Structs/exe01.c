#include <stdio.h>

/*Implemente um programa que leia o nome, a idade e o endereço de
uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima
na tela os dados da estrutura lida.*/

int main(){
    
    struct Pessoa {
        char nome[50];
        int idade;
        char endereco[100];
    };

    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    getchar(); 

    printf("Digite o endereco: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);

    return 0;
}