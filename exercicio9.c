/*SOme quatro digitos*/

#include <stdio.h>

void main(){
    int num1, num2, num3, num4, soma;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);
    printf("Digite o quarto valor: ");
    scanf("%d", &num4);
    soma = num1 + num2 + num3 + num4;
    printf("A soma entre  eles vale: %d\n", soma);

}
