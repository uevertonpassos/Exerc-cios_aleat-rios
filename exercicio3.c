/*Crie um programa que peça para o usuário 
digitar dois números e imprima a soma desses números.*/

#include <stdio.h>

void main(){
    int num1, num2, soma;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma entre %d e %d vale: %d\n",num1, num2, soma);


}
