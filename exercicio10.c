/*média aritimética*/

#include <stdio.h>

void main(){
    int num1, num2, num3, num4, media;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);
    printf("Digite o quarto valor: ");
    scanf("%d", &num4);
    media = (num1 + num2 + num3 + num4)/4;
    printf("A média aritimética entre  eles vale: %d\n", media);

}
