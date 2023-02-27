/*Faça um programa que leia um número inteiro positivo e
 imprima todos os números pares entre 0 e o número lido.*/

 #include <stdio.h>

 void main(){
    int num, i;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("Numeros pares entre 0 e %d\n", num);

    i = 0;

    while(i <= num){
        if(i % 2 == 0){
            printf("%d ", i);
        }
        i++;
    }
    
 }

