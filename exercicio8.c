/*Fazer um algoritmo que leia dois valores inteiros determine e imprima:
menor entre eles; o maior entre eles; se são iguais e se são diferentes.*/

#include <stdio.h>

void main(){
    int num1, num2;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("o primeiro valor é maior.\n");
    }
    else{
        printf("o segundo valor é maior.\n");
    }
}