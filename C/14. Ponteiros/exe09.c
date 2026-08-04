#include <stdio.h>

/*Considere a seguinte declaração: int a,*b,**c,***d. Escreva um
programa que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo
desse valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser
usado para calcular o dobro, c, o triplo, e d, o quádruplo.*/

int main() {
    int a, *b, **c, ***d;

    printf("Digite um valor para a: ");
    scanf("%d", &a);

    b = &a;   
    c = &b;     
    d = &c;   

    printf("Dobro de a: %d\n", *b * 2);
    printf("Triplo de a: %d\n", **c * 3);
    printf("Quádruplo de a: %d\n", ***d * 4);

    return 0;
}