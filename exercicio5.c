// teste while 

#include <stdio.h>

void main(){
    int num,  i = 10;
    printf("Digite um valor: ");
    scanf("%d", &num);

    while(num <= i){
        printf("O numero agora vale: %d\n", num);
        num++;

    }
}
