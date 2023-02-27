/*pensando*/

#include <stdio.h>

void main(){
    int beijo = 0, contador = 0;
    printf("Digite um valor: ");
    scanf("%d", &beijo);
    while(contador < 10){
        printf("beijo %d\n", beijo);
        beijo++;
        contador ++;
    }
}