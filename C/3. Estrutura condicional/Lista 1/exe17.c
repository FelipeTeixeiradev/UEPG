#include <stdio.h>

/*Construa um Algoritmo que indique se um número digitado está compreendido
entre 20 e 90 ou não (20 e 90 não estão na faixa de valores).*/

int main(){

    int num1;
    
    printf("Digite um número: ");
    scanf("%d", &num1);

    if(num1 > 20 && num1 < 90){
        printf("O número digitado está compreendido entre 20 e 90.");
    } else {
        printf("O número digitado não está compreendido entre 20 e 90.");
    }

    return 0;
}

