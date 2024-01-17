#include <stdio.h>

int main(){
    float n;
    float den;
    float temp;
    float somma;

    den = 1;
    temp = 0;
    n = 0;
    printf("Inserisci un numero: ");
    scanf("%f", &n);
    while (n > 0){
        somma = n + temp;
        printf("La media è %f \n",somma / den);
        temp = somma;
        den = den + 1;
        printf("Inserisci un numero: ");
        scanf("%f", &n);  
    }
    printf("Questo numero è negativo, mi dispiace non posso fare la media \n");
    return 0;
}