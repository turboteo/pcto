#include <stdio.h>

int main(){
    float n;
    float d;
    float somma;
    float temp = 0;

    printf("Inserisci un numero: ");
    scanf("%f", &n);
    d = 1;
    while(n > 0){
        somma = temp + n;
        printf("La media è: %f \n", (somma /d));
        d = d + 1;
        printf("Inserire un altro numero: \n");
        scanf("%f", &temp);
    }

    printf("Il numero è negativo, non andrò avanti \n");
    

}