#include <stdio.h>

/*Criar um Algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o
total de minutos se passaram desde o início do dia (0:00h).*/

int main(){
    
    int hora, minutos, total_minutos;
    
    printf("Digite a hora (0-23): ");
    scanf("%d", &hora);
    
    printf("Digite os minutos (0-59): ");
    scanf("%d", &minutos);
    
    if(hora < 0 || hora > 23 || minutos < 0 || minutos > 59){
        printf("Erro: Hora ou minutos inválidos.\n");
    } else {
        total_minutos = hora * 60 + minutos;
        printf("Total de minutos desde o início do dia: %d\n", total_minutos);
    }
    
    return 0;
    
}