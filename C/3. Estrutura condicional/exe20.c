#include <stdio.h>

/*Construa um Algoritmo para determinar se o indivíduo esta com um peso
favorável. Essa situação é determinada através do IMC (Índice de Massa
Corpórea), que é definida como sendo a relação entre o peso (PESO) e o quadrado
da Altura (ALTURA) do indivíduo. Ou seja,
IMC = PESO / (ALTURA * ALTURA). 
e, a situação do peso é determinada pela tabela abaixo:
IMC < 20: Abaixo do peso
20 <= IMC < 25: Peso normal
25 <= IMC < 30: Sobrepeso
30 <= IMC < 35: Obesidade leve
35 <= IMC < 40: Obesidade moderada
IMC >= 40: Obesidade mórbida
*/

int main(){

    float peso, altura, imc;
    
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 20){
        printf("Abaixo do peso");
    } else if(imc >= 20 && imc < 25){
        printf("Peso normal");
    } else if(imc >= 25 && imc < 30){
        printf("Sobrepeso");
    } else if(imc >= 30 && imc < 35){
        printf("Obesidade leve");
    } else if(imc >= 35 && imc < 40){
        printf("Obesidade moderada");
    } else {
        printf("Obesidade mórbida");
    }

    return 0;
}