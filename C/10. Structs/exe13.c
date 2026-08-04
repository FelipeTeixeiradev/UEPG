#include <stdio.h>

/*Elaborar um cadastro para 20 livros contendo as seguintes
informações: código, título, autor, área, ano e editora. Desenvolver
um menu com as seguintes opções:
1. Cadastrar os livros.
2. Imprimir as informações dos livros.
3. Pesquisar livros por código.
4. Ordenar os livros por ano.
5. Sair do programa.*/

#define MAX 20

struct Livro {
    int codigo;
    char titulo[100];
    char autor[100];
    char area[50];
    int ano;
    char editora[100];
};

int main() {
    struct Livro livros[MAX], aux;
    int opcao, i, j, codigo, encontrado;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar livros\n");
        printf("2 - Imprimir livros\n");
        printf("3 - Pesquisar livro por codigo\n");
        printf("4 - Ordenar livros por ano\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

        case 1:
            printf("\n=== Cadastro de Livros ===\n");
            for (i = 0; i < MAX; i++) {
                printf("\nLivro %d\n", i + 1);

                printf("Codigo: ");
                scanf("%d", &livros[i].codigo);

                printf("Titulo: ");
                scanf(" %[^\n]", livros[i].titulo);

                printf("Autor: ");
                scanf(" %[^\n]", livros[i].autor);

                printf("Area: ");
                scanf(" %[^\n]", livros[i].area);

                printf("Ano: ");
                scanf("%d", &livros[i].ano);

                printf("Editora: ");
                scanf(" %[^\n]", livros[i].editora);
            }
            break;

        case 2:
            printf("\n=== Lista de Livros ===\n");
            for (i = 0; i < MAX; i++) {
                printf("\nCodigo: %d\n", livros[i].codigo);
                printf("Titulo: %s\n", livros[i].titulo);
                printf("Autor: %s\n", livros[i].autor);
                printf("Area: %s\n", livros[i].area);
                printf("Ano: %d\n", livros[i].ano);
                printf("Editora: %s\n", livros[i].editora);
            }
            break;

        case 3:
            printf("Digite o codigo do livro: ");
            scanf("%d", &codigo);

            encontrado = 0;

            for (i = 0; i < MAX; i++) {
                if (livros[i].codigo == codigo) {
                    printf("\nLivro encontrado:\n");
                    printf("Codigo: %d\n", livros[i].codigo);
                    printf("Titulo: %s\n", livros[i].titulo);
                    printf("Autor: %s\n", livros[i].autor);
                    printf("Area: %s\n", livros[i].area);
                    printf("Ano: %d\n", livros[i].ano);
                    printf("Editora: %s\n", livros[i].editora);
                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                printf("Livro nao encontrado.\n");
            }
            break;

        case 4:
            for (i = 0; i < MAX - 1; i++) {
                for (j = 0; j < MAX - 1 - i; j++) {
                    if (livros[j].ano > livros[j + 1].ano) {
                        aux = livros[j];
                        livros[j] = livros[j + 1];
                        livros[j + 1] = aux;
                    }
                }
            }
            printf("Livros ordenados por ano com sucesso!\n");
            break;

        case 5:
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}