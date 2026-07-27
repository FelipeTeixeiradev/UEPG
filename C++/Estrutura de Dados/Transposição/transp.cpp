#include <iostream>

void buscaMoverPraFrente(int chave) {
    int i;

    for (i = 0; i < TAM; i++) {
        if (vetor[i] == chave) {

            int aux = vetor[i];

            // Desloca os elementos para a direita
            while (i > 0) {
                vetor[i] = vetor[i - 1];
                i--;
            }

            // Coloca a chave na primeira posição
            vetor[0] = aux;

            cout << "Encontrei " << chave
                 << " na posicao 0" << endl;
            return;
        }
    }

    cout << "Nao encontrei " << chave << endl;
}