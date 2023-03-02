//Ler um número inteiro do usuário e imprimir a tabuada desse número
#include <stdio.h>

void main(){
    int num, i;
    printf("digite um numero: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }
}
