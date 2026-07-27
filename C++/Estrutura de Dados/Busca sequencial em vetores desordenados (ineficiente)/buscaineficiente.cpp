#include <iostream>

/*Pior tipo de busca, é a mais ineficiente*/

const int TAM = 10;

int vetor[TAM] = {5, 10, 37, 15, 9, 70, 32, 25, 13, 3};

void sequencial(int chave){
    int i;

    for (i = 0; i < TAM ; i++){
        if (vetor[i] == chave){
            break;
        }
    }
    if(i == TAM){
        std::cout << "Elemento não encontrado" << std::endl;
    } else {
        std::cout << "Elemento encontrado na posição: " << i << std::endl;
    }
    
} 