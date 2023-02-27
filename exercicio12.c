/*testinho*/

#include <stdio.h>
#include <string.h>

void main(){
    char algo[20]; //lembrar de definir a quantidade quando usar strings
    int contador = 0;
    printf("digite algo: ");
    scanf("%s", algo);

    while(contador < strlen(algo)){   
        printf("%s\n", algo);
        contador ++;
    }
    printf("Acabou!");
}
