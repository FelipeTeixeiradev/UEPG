#include <iostream>

void buscaTransposicao(int chave) {
    int i;

    for (i = 0; i < TAM; i++) {
        if (vetor[i] == chave) {

            // Se não estiver na primeira posição,
            // troca com o elemento anterior
            if (i > 0) {
                int aux = vetor[i];
                vetor[i] = vetor[i - 1];
                vetor[i - 1] = aux;
                i--; // nova posição do elemento
            }

            cout << "Encontrei " << chave
                 << " na posicao " << i << endl;
            return;
        }
    }

    cout << "Nao encontrei " << chave << endl;
}