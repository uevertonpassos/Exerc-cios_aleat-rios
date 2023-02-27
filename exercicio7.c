/*    Escreva um programa em C que leia um número 
inteiro positivo digitado pelo usuário e imprima todos os
 números ímpares entre 0 e o número lido.*/

 #include <stdio.h>

 void main(){
    int num, i = 1;

    printf("Digite um valor: ");
    scanf("%d", &num);
    printf("Numeros primos entre 0 e %d \n", num);

    while(i <= num){

        printf("%d ", i);
        i+=2;
        
    }
 }
