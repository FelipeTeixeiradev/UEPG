#include <iostream>

/*Busca sequencial com sentinela, simplifica a busca sequencial em vetores desordenados*/

const int TAM = 10;

int vetor[TAM + 1] = {5, 10, 37, 15, 9, 70, 32, 25, 13, 3};

void sequencialSentinela(int chave){

    int i;
    vetor[TAM] = chave; // Colocando a chave como sentinela no final do vetor

    for (i = 0; ; i++){

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